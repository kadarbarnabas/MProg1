#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
    //adat tárolás módja
    //adatok elérése
    //tárterület

    list<int> qlist;

    for (int i = 0; i < 10; i++)
    {
        qlist.push_back(i*2);
        qlist.push_front(i);
    }
    /*
    for (int i = 0; i < 20; i++)
    {
        cout << qlist[i] << endl;
    }
    */

    cout << qlist.front() << " " << qlist.back() << endl;

    for(int i : qlist)
    {
        cout << i << endl;
    }

    list<int>::iterator it; //iterátor pointer, ami int eket tartalmazó lista elemére mutat. Vagy listán megy végig

    for( it = qlist.begin(); it != qlist.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    qlist.pop_back();
    qlist.pop_front();

    for( it = qlist.begin(); it != qlist.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    //------------------------------------------------SET-------------------------------------------

    set<int> s;
    s.insert(50);
    s.insert(10);
    s.insert(25);
    s.insert(50);
    s.insert(10);
    s.insert(1);
    s.insert(50);

    set<int>::iterator itr;

    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    //------------------------------------------------MAP-------------------------------------------

    map<string, string> nevek; //map<kulcs, érték>
    nevek.insert({"30450", "Adam"});
    nevek.insert({"70123", "Bela"});
    nevek["20547"] = "Eva";
    nevek["30951"] = "Ibolya";

    cout << nevek["30951"] << endl;
    map<string, string>::iterator it2;

    for(it2 = nevek.begin(); it2 != nevek.end(); it2++)
    {
        cout << it2->first << " " << it2->second << endl; //*it2 egy std::pair
    }

    cout << nevek.find("30951")->second << endl;
    //cout << nevek.containts("30951") << endl;
}