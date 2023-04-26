#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
class Allat
{
    public:
        string nev;
        int kor;
};

void operator >>(istream& cin, Allat& a)
{
    cin >> a.nev >> a.kor;
}

int main()
{
    int x, y;
    int osszeg;

    cout << "Adjon meg egy egesz szamot: ";
    cin >> x;
    cout << "Adjon meg egy egesz szamot: ";
    cin >> y;

    osszeg = x + y;
    cout << "A ket szam osszege " << osszeg << endl;

    Allat a;
    cin >> a;
    //cin >> a.nev >> a.kor;
    cout << a.nev << " " << a.kor << endl;

    //Kérjünk be egy számot, majd annyi állatot, ammennyit a felhasználó megadott. Tároljuk ezeket egy vektorban

    int meret = 0;
    cout << "Adja meg, hany allatot szeretne tarolni ";
    cin >> meret;

    Allat* tomb = new Allat[meret];
    for(int i = 0; i < meret; i++)
    {
        cout << "Adjon meg egy allatot ";
        cin >> tomb[i];
    }
/*
    for(int i = 0; i < meret; i++)
    {
        cout << tomb[i].nev << " " << tomb[i].kor << endl;
    }
*/
    //delete[] tomb;

    
    //ofstream - output file stream - kimeneti állomány - létrehoz ír
    //ifstream - input - bemeneti állomány - olvas
    //fstream - létrehoz, ír, olvas

/*
    ofstream file1("file1.txt"); //open függvény meghívódik alapértelmezetten

    file1 << "Beirtam az allomanyba \n";
    file1 << "Beirtam az allomanyba \n";
    file1 << "Beirtam az allomanyba \n";

    file1.close();

    ifstream file2("file1.txt");

    string text;

    while (getline(file2, text))
    {
        cout << text;
    }

    while (file2 >> text)
    {
        cout << text << endl;
    }


    file2.close();
*/
    //------------------------------------------------------------
    string nev;
    cout << "Adja meg a nevet ";
    cin >> nev;

    ofstream file3;
    file3.open("nev.txt");
    file3 << nev << endl;
    file3.close();

    ifstream file4;
    file4.open("nev.txt");

    string txt;
    file4 >> txt;
    cout << txt << endl;
    file4.close();
    //------------------------------------------------------------

    /*
        ios::app Append - hozzáfűzés - az output az állomány végére kerül
        ios::in Input - olvasás
        ios::out Output - írás
        ios::trunc Truncate - tartalom törlése - ha létezik az állomány, leüríti a tartalmát
    */
    /*
    fstream file5;
    file5.open("nev.txt", ios::out);
    //file5.open("nev.txt", ios::out | ios::in);
    //file5.open("nev.txt", ios::out | ios::trunc);
    file5.close();
    */
    
    ofstream allat;

    allat.open("allat.txt");
    for (int i = 0; i < meret; i++)
    {
        allat << tomb[i].nev << " " << tomb[i].kor << endl;
    }
    allat.close();

    ifstream allat2;
    allat2.open("allat.txt");

    string allatka;
    /*
    for (int i = 0; i < meret; i++)
    {
        allat2 >> allatka;
        cout << allatka << endl;
    }
    */

    while (getline(allat2, allatka))
    {
        cout << allatka << endl;;
    }
    
    allat2.close();



    delete[] tomb;
}

