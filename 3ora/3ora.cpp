#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct 
    {
        int szul_ev;
        string nev;
    }   szemely1, szemely2;

    szemely1.nev = "Janos";
    szemely1.szul_ev = 2000;

    szemely2 = szemely1;

    cout << szemely1.nev << ' ' << szemely1.szul_ev << endl;
    cout << szemely2.nev << ' ' << szemely2.szul_ev << endl;

    szemely1.nev = "Bela";

    cout << szemely1.nev << ' ' << szemely1.szul_ev << endl;
    cout << szemely2.nev << ' ' << szemely2.szul_ev << endl;

    struct jarmu
    {
        string marka;
        string tipus;
        short int evjarat;
    };
    
    jarmu swift;
    swift.marka = "Suzuki";
    swift.tipus = "Swift";
    swift.evjarat = 2002;

    jarmu civic;
    civic.marka = "Honda";
    civic.tipus = "Civic";
    civic.evjarat = 2009;

    if (swift.evjarat > civic.evjarat)
    {
        cout << "A " << swift.tipus << " fiatalabb" << endl;
    }
    else
    {
        cout << "A " << civic.tipus << " fiatalabb" << endl;
    }

    string st = "narancs";
    string& gyumolcs = st;

    cout << st << " " << gyumolcs << endl;
    st = "kiwi";

    cout << st << " " << gyumolcs << endl;
    cout << &st << " " << &gyumolcs << endl;

    cout << &civic << " " << &civic.marka << " " << &civic.tipus << " " << &civic.evjarat << endl;

    int a = 30;
    int* p = &a;
    
    cout << a << " " << &a << " " << p << " " << &p << endl;
    cout << *p << endl;

    cout << sizeof(p) << endl;

    *p = 15;

    cout << a << " " << *p << endl;

    int* ptr = NULL;

    if(ptr)
    {
        cout << "Nem null" << endl;
    }
    else
    {
        cout << "null" << endl;
    }

    int tomb[5] = {1, 2, 3, 4, 5};
    int *tptr;

    tptr = tomb;
    cout  << tomb << endl;
    cout << tomb << " " << &tomb[0] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << tptr << " " << *tptr << endl;
        tptr++;
    }

    cout << endl << endl;
    tptr = &tomb[4];

    for (int i = 5; i > 0; i--)
    {
        cout << tptr << " " << *tptr << endl;
        tptr--;
    }
    
    cout << endl << endl;
    tptr = tomb;

    while(tptr <= &tomb[4])
    {
        cout << tptr << " " << *tptr << endl;
        tptr++;
    }

    *(tomb+4) = 500;
    cout << endl << endl;

    for (int i = 0; i < 5; i++)
    {
        *(tomb+i) = 1;
        
        cout << *(tomb+i) << " " << tomb + i << endl;
    }

    int *ptrtomb[5];
    for (int i = 0; i < 5; i++)
    {
        ptrtomb[i] = &tomb[i];
        cout << *ptrtomb[i] << endl;
    }
    
    char* s = "Hello, World";
    cout << s << " " << *s << endl;
    
    char* nevek[3] = {"Bela", "Kati", "Zsuzsa"};

    for (int i = 0; i < 3; i++)
    {
        cout << nevek+1 << " " << *(nevek+i) << endl;
    }

    int z = 5;
    int* zptr = &z;

    int** zpptr = &zptr;

    cout << z << " " << *zptr << " " << **zpptr << endl;

    //*p++ ---> *(p++) p feloldása, majd pointer inkrementálása
    //*++p ---> *(++p) p inkrementálása, majd feloldása
    //++*p ---> ++(*p) p feloldása, majd a pointer value inkrementálása
    //(*p)++ --->      p feloldása, majd a pointer value inkrementálása utólag

    cout << endl << endl;

    int tomba[5] = {1, 2, 3, 4 ,5};
    for (int i = 0; i < 5; i++)
    {
        if (*(tomba + i) == 1)
        {
            *(tomba + i) = 5;
        }
        else if (*(tomba + i) == 5)
        {
            *(tomba + i) = 1;
        }
        cout << *(tomba + i) << endl;
    }
    
    cout << endl << endl;

    int tomb2[5] = {1, 2, 3, 4, 5};
    int mtomb[5];

    int* kezdo_ptr = tomb2;
    int* veg_ptr = &(tomb2[4]);
    int* cel_ptr = mtomb;

    while (kezdo_ptr <= veg_ptr)
    {
        *(cel_ptr++) = *(kezdo_ptr++);
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout <<mtomb[i] << endl;
    }
    

}