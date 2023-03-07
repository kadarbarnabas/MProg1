#include <iostream>
#include <cmath>
using namespace std;

int max(int arr1[], int arraylength)
{
    int max = 0;

    for (int i = 0; i < arraylength; i++)
    {
        //cout << i << ' ' << arr1[i] << endl;

        if (max < arr1[i])
        {
            max = arr1[i];
        }
    }
    return max;
}

/*
int main()
{
    int szamok[4] = {2, 9, 12, 7};
    int x = sizeof(szamok) / sizeof(int);

    cout << max(szamok, x) << endl;
    return 0;
}
*/

int f1()
{
    cout << "1. feladat\n" << endl;

    int szam2d[3][4] =
    {
        {1, 4, 2, 3},
        {6, 5, 7, 8},
        {10, 12, 9, 11}
    };

    int arraymaxs[sizeof(szam2d[1]) / sizeof(int)] = {};

    for (int i = 0; i < 3; i++)
    {
        int sizeline = sizeof(szam2d[i]) / sizeof(int);

        cout << i + 1 << '.' << " sor maximuma : " << max(szam2d[i], sizeline) << endl;

        arraymaxs[i] = max(szam2d[i], sizeline);
    }
    
    int arrsize = sizeof(arraymaxs) / sizeof(int);

    cout << "\nA tomb maximuma : " << max(arraymaxs, arrsize) << endl;

    return 0;
}

int f2()
{
    cout << "\n2. feladat" << endl;

    cout << "\n100-nal kisebb es 3-al oszthato szamok:" << endl;
    for (int i = 100; i > 1; i--)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }

    cout << "\n100-nal kisebb es 2 hatvanyai:" << endl;
    int i = 0;
    while (pow(2, i) <= 100)
    {
        cout << pow(2, i) << endl;
        i++;
    }

    return 0;
}

int main()
{
    f1();
    f2();
}