#include <iostream>

int main(){
    char sztring[] = "Hello, world!";

    std::cout << sztring << std::endl;

    std::string st = "C++ sztring";
    std::cout << st << std::endl;

    using namespace std;

    cout << "std nevter hasznalata" << endl;

    int x1 = 12;
    double y1;

    y1 = x1;

    cout << y1 << endl;

    int x2;
    double y2 = 1.11;
    
    x2 = y2;

    cout << x2 << endl;

    //explicit
    int z = 21;
    double zs;

    zs = double(z);
    cout << zs << endl;

    if(21 > 10){
        cout << "nagyobb" << endl;

    }   else if(15 > 16) {
        cout << "else if" << endl;

    }   else {
        cout << "egyébb" << endl;

    }

    if(10 > 9){
        if(11 > 10){
            if(true){
            ;
            } else {
            ;
            }
        } else if (false){
            ;
        }
    }
    // ? ha igaz : ha hamis
    int cif = 10>9 ? 1 : 0;

    cout << cif << endl;

    int x3 = 1;
    int y3 = 10;
    string eredmeny;

    eredmeny = (x3 == y3) ? "egyenlo" : "nem egyenlo";
    cout << eredmeny << endl;

    if(x3 == y3){
        eredmeny = "egyeblo";
    } else if (x3 < y3){
        eredmeny = "kisebb";
    } else {
        eredmeny = "nagyobb";
    }

    cout << eredmeny << endl;

    eredmeny = (x3 == y3) ? "egyenlő" : (x3 < y3) ? "kisebb" : "nagyobb";
    eredmeny = (x3 < y3) ? "kisebb" : (x3 == y3) ? "egyenlo" : "nagyobb";

    int nap = 6;
    switch(nap){
        case 6:
            cout << "szombat" << endl;
            break;
        case 7:
            cout << "vasarnap" << endl;
            break;
        default:
            cout << "mindjart hetvege" << endl;
            break;
    }

    int i = 0;
    while (i < 10) // előtesztelő ciklus
    {
        cout << i << endl;
        i++;
    }

    do {//hátultesztelő ciklus, legalább egyszer lefut
        ++i;
        cout << i << endl;
    } while (i < 10);
    
    //for(ciklus változó inicializálása; leállási feltétel; ciklusváltozó értékének módosítása)
    for (i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    
    for(int i = 100; i > 0; i = (i/2) - 1)
    {
        cout << i << endl;
    }

    cout << " " << endl;

    for (i = 0; i <= 2; i++)
    {
        cout << i;
        cout << " kulso" << endl;
        for(int j = 1; j <= 3; j++)
        {
            cout << j;
            cout << " belso"<< endl;
        }
    }

    cout << " " << endl;

    int szamok[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << szamok[i] << endl;
    }

    cout << " " << endl;

    for (int szam: szamok)
    {
        cout << szam << endl;
    }
    
    //bit-ok számát adja meg mindig
    cout << sizeof(szamok) << endl;
    
    for(int i = 0; i < sizeof(szamok)/sizeof(int); i++)
    {
        cout << szamok[i] << endl;
    }

    i = 0;
    while ( i < 10)
    {
        cout << i << endl;
        i++;
        if (i == 4)
        {
            break;
        }
    }

    i = 0;
    while (i < 10)
    {
        if(i == 4)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }

    char betuk[2][4] = {
        {'a', 'b', 'c', 'd'},
        {'e', 'f', 'g', 'h'}
    };

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << betuk[i][j] << " ";
        }
        cout << endl;
    }

    int szam2d[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for(int i = 0; i < 3; i++)
    {
        float szamokösszege = 0;
        float átlag = 0;
        for(int j = 0; j < 4; j++)
        {
            szamokösszege += szam2d[i][j];
        }
        átlag = szamokösszege / 4;
        cout << i+1 << ". sor atlaga: " << átlag << endl;
    }
}