#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Banan
{
    public:
        int suly;
        string minoseg;
        bool bio;

        Banan(int suly, string minoseg, bool bio)
        {
            this->suly = suly;
            this->minoseg = minoseg;
            this->bio = bio;
        }
        ~Banan()
        {

        }
    

};

int main()
{
    Banan a(10, "A", 1);
    Banan b(4, "B", 0);
    Banan c(6, "C", 0);
    Banan d(8, "A", 1);
    Banan e(2, "B", 0);

    vector<Banan> bananok;
    bananok.push_back(a);
    bananok.push_back(b);
    bananok.push_back(c);
    bananok.push_back(d);
    bananok.push_back(e);

    int elozo = bananok[0].suly;
    for (int i = 0; i <= 5 - 1; i++)
	{
		int index;
		if (bananok[i].suly < bananok[i- 1].suly)
		{
			index = bananok[i].suly;
			bananok[i].suly = bananok[i - 1].suly;
			bananok[i - 1].suly = index;
			i = 0;
		}
	}

    for(Banan i : bananok)
    {
        cout << i.suly << endl;
    }
}