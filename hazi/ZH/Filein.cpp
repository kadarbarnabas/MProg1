#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    vector<string> lines;
    ifstream sor;
    sor.open("sorok.txt");
    string sorok, betuk;

    while(getline(sor, sorok))
    {
        for (int i = 0; i < sorok.length(); i++)
        {
            if(sorok[i] != ' ')
            {
                betuk += sorok[i];
            }
        }
    }
    cout << betuk << endl;
    sor.close();

    int ritkanum;
    string ritkabetu = "";
    for (int i = 0; i < betuk.length(); i++)
    {
        int index = 0;
        for (int j = 0; j < betuk.length(); j++)
        {
            if(tolower(betuk[i]) == tolower(betuk[j]))
            {
                index++;
            }
        }
        if(index < ritkanum)
        {
            ritkanum = index;
            ritkabetu = betuk[i];
        }
    }

    ofstream gyakori;
    gyakori.open("gyakori.txt");
    gyakori << "A legritakbban elofrdlo betu: " << ritkabetu << " aminek a szamosaga: " << ritkanum << endl;
    gyakori.close();

    
}