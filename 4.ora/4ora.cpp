#include <iostream>
#include <string>
#include <vector>
using namespace std;

void csere1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void csere2(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void csere3(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void szoroz(int& a, int m)
{
    a = a * m;
}

int osszead(int a, int b)
{
    return a + b;
}

int factorial(int n)
{
    int o = 1;
    for (int i = 1; i <= n; i++)
    {
        o = o * i;
    }

    return o;
}

int fact(int n)
{
    if(n > 1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    //Stack
    int a;
    int b[10];

    //Heap
    //C: malloc és free
    //c++: new és delete
    //pointer-változó = new adattípus

    int*p = new int;

    int* tp = new int[10];

    int* p2 = new(nothrow) int;
    if (!p2)
    {
        cout << "Memória allokáció sikertelen" << endl;
    }

    p2 = NULL; //

    int* p3 = new int;
    *p3 = 29;

    cout << *p3 << " " << p3 << " " << &p3 << endl;

    float* r = new float(21.19);
    cout << *r << endl;

    int n2 = 5;
    int* q = new int[n2];

    for (int i = 0; i < n2; i++)
    {
        q[i] = i + 1;
        cout << q[i] << endl;
    }

    delete p3;
    delete r;

    //delete q; ezzel a 1 tömb nulladik elemét töröljük
    delete[] q; // ezzel az egész q tömböt töröljük

    vector<int> v;

    for (int i = 0; i <= 10; i++)
    {
        v.push_back(i * 10);
        //cout << v[i] << " " << v.at(i)<< endl;
        cout << v[i] << endl;
    }
    
    cout << v.front() << " " << v.back() << endl;

    int* pos = v.data();
    cout << pos << " " << *pos << endl;

    v.pop_back();
    cout << v.back() << endl;
    v.pop_back();
    cout << v.back() << endl;

    v.clear();

    v = {1, 5, 2, 7, 3, 8, 56, 7, 5, 5, 3, 9};

    /*
    for (int i = 1; i < v.size(); i++)
    {
        int index;
		if (v[i] < v[i -1])
		{
			index = v[i];
			v[i] = v[i -1];
			v[i -1] = index;
			i = 0;
		}

    }
    
    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << endl;
    }
    */

   /*
   sort(v.begin(), v.end());
   for (int i : v)
    {
        cout << i << endl;
    }
    */

    int x = 1;
    int y = 2;
    //Érték szerinti paraméter átadás
    /*                          |
    void csere1(int a, int b)   |
    {                           |
    int temp = a;               |
    a = b;                      |
    b = temp;                   |
    }                           v
    */
    csere1(x, y);
    cout << x << " " << y << endl;

    //Érték szerinti paraméter átadás
    //Cím/referencia szerinti paraméter átadás 
    /*                          |
    void csere2(int& a, int& b) |
    {                           |
        int temp = a;           |
        a = b;                  |
        b = temp;               |
    }                           v
    */
    csere2(x, y); 
    cout << x << " " << y << endl;
    //Pointer
    /*                          |
    void csere3(int* a, int* b) |
    {                           |
        int temp = *a;          |
        *a = *b;                |
        *b = temp;              |
    }                           v
    */
    csere3(&x, &y);
    cout << x << " " << y << endl;

    szoroz(y, 5);
    cout << x << " " << y << endl;

    cout << osszead(x, y) << endl;

    cout << factorial(4) << " " << fact(4) << endl;

    


}