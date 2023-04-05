#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Allat
{
    public:
        //adattag
        string nev;
        int kor;

        //tag fügvény - viselkedés
        void mozog()
        {
            cout << nev << " megmozdult!" << endl;
        }

        //static - osztály szintű
        static int szamlalo;
        static void printSzamlalo()
        {
            cout << szamlalo << endl;
        }
        
        void baratkozas(Allat b);

        //konstruktor: objektum létrehozás után
        //fögvény neve megegyzik az osztály nevével
        //nincs vissza térési érték megadva

        //üres konstrktor-alapértelmezetten létezik amíg nem hozunk létre egy paraméterezett konstuktort
        Allat()
        {
            szamlalo++;
            //cout << this->nev << " konstruktor lefutott" << endl;
        }

        //másoló konstuktor - alapértelmezetten létezik
        //Állat.a(b);
        
        //paraméterezett konstruktor
        Allat(string n)
        {
            nev = n;
            kor = 0;
            szamlalo++;
            //cout << this->nev << " konstruktor lefutott" << endl;
        }
        
        //this - aktuális objektum mutató pointer
        //paraméterezett konstuktor
        //full vagy teljes konstrukor
        Allat(string n, int k)
        {
            this->nev = n;
            this->kor = k;
            //nev = n;
            //kor = k;
            szamlalo++;
            //cout << this->nev << " konstruktor lefutott" << endl;
        }

        Allat(int i, string s, double d)
        {
            cout << i << " " << s << " " << d << endl;
            szamlalo++;
            //cout << this->nev << " konstruktor lefutott" << endl;
        }
    
        //destruktor
        //fügvény neve megegyezik osztály nevével, de előtte hullám van
        ~Allat()
        {
            szamlalo--;
            //cout << this->nev << " dekonstruktor lefutott" << endl;
        }

};

void Allat::baratkozas(Allat b)
{
    cout << nev << " es " << b.nev << " baratok lettek!" << endl;
}

// A kutya osztély megörökölte az Állat osztály összes elemét
class Kutya : public Allat
{
    public:
        string szin;
        string kedvencjatek;

        void ugat()
        {
            cout << "Vau-vau" << endl;
        }
        //full konstukror destuktor

        Kutya()
        {

        }
        Kutya(string nev, int kor, string szin, string kedvencjatek)
        {
            this->nev = nev;
            this->kor = kor;
            this->szin = szin;
            this->kedvencjatek = kedvencjatek;
            szamlalo++;
        }
        ~Kutya()
        {
            szamlalo--;
            //cout << this->nev << " dekonstruktor lefutott" << endl;
        }
};

int Allat::szamlalo = 0;

string idosebb(Allat a, Allat b)
{
    if(a.kor > b.kor)
    {
        return a.nev;
    }
    else
    {
        return b.nev;
    }
}

int main()
{
    //objektum v példány
    Allat a;
    a.nev = "Bodri";
    a.kor = 10;
    a.mozog();
    cout << a.nev << " " << a.kor << endl;

    Allat b;
    b.nev = "Cirmi";
    b.kor = 7;

    a.baratkozas(b);

    Allat c("Morzsa");
    cout << c.nev << " " << c.kor << endl;

    Allat d("Bloki", 3);
    cout << d.nev << " " << d.kor << endl;

    //cout << a.szamlalo << endl; Allat a számlálója
    cout << Allat::szamlalo << endl; // az osztály számlálója
    Allat::printSzamlalo();

    Kutya k;
    k.nev = "Fifi";
    k.kor = 2;
    k.mozog();

    Allat::printSzamlalo();
    Kutya::printSzamlalo();

    Kutya v("Ubul", 3 , "barna", "labda");
    cout << v.nev << " " << v.kor << " " << v.szin << " " << v.kedvencjatek << endl;

    cout << idosebb(a, b) << " idosebb!" << endl;
    //idosebb(Allat a, Allat b)

    cout << idosebb(a, k) << " idosebb!" << endl;
    //idosebb(Allat a, Kutya k)

    vector<Allat> allatok;
    allatok.push_back(a);
    allatok.push_back(b);
    allatok.push_back(c);
    allatok.push_back(d);
    allatok.push_back(k);

    for(Allat a : allatok)
    {
        cout << a.nev << endl;
    }

    //cout << legidosebb(allatok) << " " << legfiatalabb(allatok) << endl;




}