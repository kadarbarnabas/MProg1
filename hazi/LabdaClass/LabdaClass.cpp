#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Hozzon l�tre egy oszt�lyt vagy strukt�r�t labda n�ven, amelynek m�rete �s sz�ne van.
T�lts�n fel egy 5 m�ret� t�mb�t labd�kkal.
�rja ki a k�perny�re, hogy h�ny piros �s h�ny k�k labd�nk van.
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
	Labda a("S", "k�k");
	Labda b("XL", "piros");
	Labda c("SS", "k�k");
	Labda d("XL", "piros");
	Labda e("S", "k�k");

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
		if (a.color == "k�k")
		{
			kek++;
		}
	}

	cout << "Kek labdak: " << kek << " | " << "Piros labdak: " << piros << endl;
}
