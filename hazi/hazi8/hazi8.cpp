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
    

    //tag f�gv�ny - viselked�s
    void mozog()
    {
        cout << nev << " megmozdult!" << endl;
    }

    //static - oszt�ly szint�
    static int szamlalo;
    static void printSzamlalo()
    {
        cout << szamlalo << endl;
    }


    void baratkozas(Allat b);


    //konstruktor: objektum l�trehoz�s ut�n
    //f�gv�ny neve megegyzik az oszt�ly nev�vel
    //nincs vissza t�r�si �rt�k megadva

    //�res konstrktor-alap�rtelmezetten l�tezik am�g nem hozunk l�tre egy param�terezett konstuktort
    Allat()
    {
        szamlalo++;
        //cout << this->nev << " konstruktor lefutott" << endl;
    }

    //m�sol� konstuktor - alap�rtelmezetten l�tezik
    //�llat.a(b);

    //param�terezett konstruktor
    Allat(string n)
    {
        nev = n;
        kor = 0;
        szamlalo++;
        //cout << this->nev << " konstruktor lefutott" << endl;
    }

    //this - aktu�lis objektum mutat� pointer
    //param�terezett konstuktor
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
    //f�gv�ny neve megegyezik oszt�ly nev�vel, de el�tte hull�m van
    ~Allat()
    {
        szamlalo--;
        //cout << this->nev << " dekonstruktor lefutott" << endl;
    }
 
};

//HAZI-----------------------------
Allat legidosebb(vector<Allat> v)
{
    Allat oreg("", 0);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].kor > oreg.kor)
        {
            oreg.nev = v[i].nev;
            oreg.kor = v[i].kor;
        }
    }
    return oreg;
}
Allat legfiatalabb(vector<Allat> v)
{
    Allat fiatal("", 100);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].kor < fiatal.kor)
        {
            fiatal.nev = v[i].nev;
            fiatal.kor = v[i].kor;
        }
    }
    return fiatal;
}
ostream& operator<<(ostream& cout, Allat a)
{
    cout << a.nev << " " << a.kor;
    return cout;
}

void Allat::baratkozas(Allat b)
{
    cout << nev << " es " << b.nev << " baratok lettek!" << endl;
}



// A kutya oszt�ly meg�r�k�lte az �llat oszt�ly �sszes elem�t
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
    if (a.kor > b.kor)
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
    //objektum v p�ld�ny
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

    //cout << a.szamlalo << endl; Allat a sz�ml�l�ja
    cout << Allat::szamlalo << endl; // az oszt�ly sz�ml�l�ja
    Allat::printSzamlalo();

    Kutya k;
    k.nev = "Fifi";
    k.kor = 2;
    k.mozog();

    Allat::printSzamlalo();
    Kutya::printSzamlalo();

    Kutya v("Ubul", 3, "barna", "labda");
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

    for (Allat a : allatok)
    {
        cout << a.nev << endl;
    }
    cout << legidosebb(allatok) << " " << legfiatalabb(allatok) << endl;




}