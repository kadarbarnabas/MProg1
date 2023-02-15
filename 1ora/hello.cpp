#include <iostream>

#define LENGTH 14 //állandó constans hatóköre globális

//globális hatókör
int g = 2; //globális változó

int main(){
    //  g++ hello.cpp - o out fordítás
    //  ./ out futtatás

    //  lokális hatókör

    std::cout << "Hello, woruld!\n";
    std::cout << "Hello, wourld!" << std::endl;

    char c = 'c'; // 'c'karakter literál
    int i = 0;
    short int si = 7;
    long int li = 50;
    float f = 10.2;
    double d = 10.5;
    bool b = false;

    int il = 2, i2 = 3, q = 5;
    char x,y;

    std::cout << x << std::endl;
    
    std::cout << "char: " << sizeof(char) << std::endl; //mennyit foglal a memórában egy adott típus

    //egysoros komment

    /*
        több soros
        komment 
        !
    */
    typedef int egesz; //változó típus nevének az átalakítása

    egesz e = 15;

    //globális változó kiiratása
    std::cout << g << std::endl;

    int g = 3; //lokális változó

    std::cout << g << std::endl;

    {//blokk
        std::cout << g << std::endl;
        int g = 4;
        std::cout << g << std::endl;
    }

    std::cout << g << std::endl;

    //int g = 5; nem lehet deklarálni ugyan azon a néven uj változót

    //speciális karakter

    // "\" escape karakter

    // \ ' " ? alert vackspace from-feed new-line carriage-return tab vertical-tab"
    std::cout << "\\ \' \" \? \a \b \f \n \r \t \v" << std::endl;

    "hello, world!"; //sztring literál

    std::cout << LENGTH << std::endl;

    const int width = 2; //szintén állandó érték hatóköre lokális

    // operátorok + - * / % ++ --

    int mod = 10 % 3; // mod értéke 1 10 osztva 3-al egy mardékot ad

    std::cout << mod << std::endl;

    std::cout << ++mod << std::endl; // először a növelés aztán a kiiratás !!számít az operátor helyzete!!

    // egyéb operátorok == != <= >= < >
    // logikai operátorok && -és || -vagy ! -tagadás
    // érték adó operátorok = += -= *= /= %= <<= >>= &= ^= |=
    //bitműveletek & -ls | -vagy ^ -XOR << elotlás >>

    int A = 60;
    int B = 13;

    std::cout << (A << 2) << std::endl;

    int tomb[5] = {1,2,3,4,5}; //tömb létrehozás és felöltés
    std::cout << tomb[0] << std::endl; //tömb tartalmának kiiratása
    std::cout << tomb[5] << std::endl; //tömb érétének kívülre mutatása lehetsége ámbár a következő integer memóra méretét fogja kiirni vagyis értelmelen

    return 0;
}