#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
ozzon létre egy osztályt vagy struktúrát monitor néven, amelynek szélessége, magassága és márkája van.
Töltsön fel egy 5 méretû tömböt monitorokkal.
Hozzon létre egy tömböt, amiben kiválogatja a Samsung márkájú monitorokat.

*/

class Monitor
{
    public:
        int length;
        int height;
        string brand;
           
        Monitor(int length, int height, string brand)
        {
            this->length = length;
            this->height = height;
            this->brand = brand;
        }
        ~Monitor()
        {

        }
};

int main()
{
    Monitor a(20, 10, "Samsung");
    Monitor b(30, 50, "AOC");
    Monitor c(60, 30, "Asus");
    Monitor d(50, 50, "Samsung");
    Monitor e(30, 10, "Samsung");

    vector<Monitor> monitorok;
    monitorok.push_back(a);
    monitorok.push_back(b);
    monitorok.push_back(c);
    monitorok.push_back(d);
    monitorok.push_back(e);

    vector<Monitor> samsungforever;
    for (Monitor a : monitorok)
    {
        if (a.brand == "Samsung")
        {
            samsungforever.push_back(a);
        }
    }
    for (Monitor a : samsungforever)
    {
        cout << a.brand << " " << a.length << " " << a.height << endl;
    }
}
