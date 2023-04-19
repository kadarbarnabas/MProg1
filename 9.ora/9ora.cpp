#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Termek
{
protected:
    int azonosito;
    int ar;
    string lejarat;
public:
    Termek(int azonosito, int ar, string lejarat)
    {
        this->ar = ar;
        this->azonosito = azonosito;
        this->lejarat = lejarat;
    }
    Termek()
    {

    }

    ~Termek()
    {

    }

    int getAzon()
    {
        return azonosito;
    }

    void setAzon(int azon)
    {
        this->azonosito = azon;
    }

    int getAr()
    {
        return ar;
    }
    
    void setAr(int price)
    {
        this->ar = price;
    }

    string getLejar()
    {
        return lejarat;
    }

    void setLejar(string le)
    {
        this->lejarat = le;
    }
    


};

class Etel : public Termek
{
private:
    string osszetevok;
    double suly;
public:
    Etel(int azonosito, int ar, string lejarat, string osszetevok, double suly)
    {
        this->ar = ar;
        this->azonosito = azonosito;
        this->lejarat = lejarat;
        this->osszetevok = osszetevok;
        this->suly = suly;
    }

    Etel()
    {

    }

    ~Etel()
    {

    }

    string getOszz()
    {
        return osszetevok;
    }

    void setOssz(int ossz)
    {
        this->osszetevok = ossz;
    }

    double getSuly()
    {
        return suly;
    }

    void setSuly(int suly)
    {
        this->suly = suly;
    }
};

class Ital : public Termek
{
private:
    int mennyiseg;
    string szin;
public:
    Ital(int azonosito, int ar, string lejarat, int mennyiseg, string szin)
    {
        this->ar = ar;
        this->azonosito = azonosito;
        this->lejarat = lejarat;
        this->mennyiseg = mennyiseg;
        this->szin = szin;
    }
    Ital()
    {

    }
    ~Ital()
    {

    }

    int getMeny()
    {
        return mennyiseg;
    }

    void setMeny(int menny)
    {
        this->mennyiseg = menny;
    }

    string getSzin()
    {
        return szin;
    }

    void setSzin(string szin)
    {
        this->szin = szin;
    }


};

ostream& operator<<(ostream& cout, Etel a)
{
    cout << a.getAzon() << " " << a.getAr() << " " << a.getLejar() << " " << a.getOszz() << " " << a.getSuly();
    return cout;
}
int main()
{
    Termek t(1, 10, "2023.04");
    Etel e(2, 20, "2025.01", "liszt", 1.2);
    Ital i(3, 15, "2023.06", 200, "kék");

    cout << e << endl;;

}