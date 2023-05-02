#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Hozzon létre egy osztályt vagy struktúrát labda néven, amelynek mérete és színe van.
Töltsön fel egy 5 méretû tömböt labdákkal.
Írja ki a képernyõre, hogy hány piros és hány kék labdánk van.
*/

class Labda
{
public:
	string size;
	string color;
	
	Labda(string size, string color)
	{
		this->color = color;
		this->size = size;
	}
	~Labda()
	{

	}
};

int main()
{
	Labda a("S", "kék");
	Labda b("XL", "piros");
	Labda c("SS", "kék");
	Labda d("XL", "piros");
	Labda e("S", "kék");

	vector<Labda> labdak;
	labdak.push_back(a);
	labdak.push_back(b);
	labdak.push_back(c);
	labdak.push_back(d);
	labdak.push_back(e);

	int kek = 0;
	int piros = 0;

	for (Labda a : labdak)
	{
		if (a.color == "piros")
		{
			piros++;
		}
		if (a.color == "kék")
		{
			kek++;
		}
	}

	cout << "Kek labdak: " << kek << " | " << "Piros labdak: " << piros << endl;
}
