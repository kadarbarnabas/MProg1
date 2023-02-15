#include <iostream>

int main(){
    //  g++ hello.cpp - o out fordítás
    //  ./ out futtatás

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

    return 0;
}