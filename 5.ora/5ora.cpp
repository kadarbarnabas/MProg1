#include <iostream>
#include <string>
#include <vector>

using namespace std;
//operator tul terheles
/*
void operator<<(vector<int>& v, int a)
{
    v.push_back(a);
}
*/
vector<int> operator+(vector<int> v1, vector<int> v2)
{
    vector<int> vo;
    for (int i : v1)
    {
        vo.push_back(i);
    }
    for (int i : v2)
    {
        vo.push_back(i);
    }

    return vo;
}

vector<int>& operator<<(vector<int>& v, int a)
{
    v.push_back(a);
    return v;
}

vector<int>& operator--(vector<int>& v)
{
    for (int& i : v)
    {
        cout << --i << " ";
    }
    cout << endl;
    return v;
}

void operator++(vector<int>& v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

float absolute(float f)
{
    if (f < 0.0f)
    {
        f = -f;
    }
    return f;
}

int absolute(int i)
{
    if (i < 0.0f)
    {
        i = -i;
    }
    return i;
}

int main()
{
    cout << absolute(-1.5f) << " | " << absolute(-5) << endl;
    //--------------------------------------

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);


    //operator tul terheles hasznalata
    v << 3;
    for (int i : v)
    {
        cout << i << endl;
    }


    vector<int> v2;
    v2 << 4;
    v2 << 5;
    v2 << 6;
    vector<int> vo = v + v2;
    for (int i : vo)
    {
        cout << i << " ";
    }

    vo << 8 << 9 << 10;

    for (int i : v)
    {
        cout << i << endl;
    }

    ++vo;
    --vo;
    ++--------vo;
}
