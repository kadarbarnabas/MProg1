#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
int max(int arr[])
{
    int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
    return max;
}
int min(int arr[])
{
    int min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int f1(int p1, int p2)
{
    int elozo = p1;
    int index = 0;
    int maradek = p2;
    while(maradek != 0)
    {
        index = maradek;
        maradek = elozo % maradek;
        elozo = index;

    }
    cout << elozo << endl;
    
    return (p1 * p2) / elozo;
    
    
}
int* f2(int arr[][5])
{
    static int maxmin[5];
    for (int i = 0; i < 5; i++)
    {
        maxmin[i] = max(arr[i]) - min(arr[i]);
    }
    
    return maxmin;
}
/*
void f3(int* a, int* b, int* c)
{
    int nums[3] = {*a, *b, *c};
    int temp = *a;
    *a = *c;
    *c = temp;

    int temp = *b;
    *b = *a;
    *a = temp;


}
*/
void f4()
{
    string ossz;
    string szavak[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Adja meg a " << i + 1 << ". szot: ";
        cin >> szavak[i];
        ossz += szavak[i];
    }
    int abetuk = 0;
    for (int i = 0; i < ossz.length(); i++)
    {
        if(tolower(ossz[i]) == 'a')
        {
            abetuk++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if(szavak[i].length() <= abetuk)
        {
            cout << szavak[i] << endl;
        }
    }
    
    
}

int main()
{
    cout << "1 feladat----------------------feladat 1" << endl;
    cout << f1(25, 8) << endl;
    cout << "2 feladat----------------------feladat 2" << endl;
    int nums[5][5] = 
    {
        {1, 5 ,2 ,3 ,9},
        {2, 4, 1, 5, 2},
        {9, 2, 6, 3 ,1},
        {1, 5, 3, 9, 7},
        {1, 5, 2, 4, 9}
    };
    for (int i = 0; i < 5; i++)
    {
        cout << *(f2(nums) + i) << endl;
    }
    cout << "3 feladat----------------------feladat 3" << endl;
    int a = 1;
    int b = 2;
    int c = 3;
    //f3(&a, &b, &c);
    cout << "4 feladat----------------------feladat 4" << endl;
    f4();
}