#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
/*1. feladat. �rjon egy f�ggv�nyt, melynek 2 integer param�tere van, a visszat�r�si �rt�ke pedig a k�t sz�m k�z�tti fibonacci sz�m*/
vector<int> f1(int p1, int p2)
{
	vector<int> fibs;
    vector<int> fibo;
	fibo.push_back(0);
	fibo.push_back(1);
	fibo.push_back(1);
	for (int i = 2; i < p2; i++)
	{
		int fib = fibo[i] + fibo[i - 1];
		fibo.push_back(fib);
		if (fib <= p2 && fib >= p1)
		{
			fibs.push_back(fib);
		}

		if (fib >= p2)
		{
			break;
		}
	}

	return fibs;
}
/* 2. feladat: �rjon egy f�ggv�nyt, amelynek egy 10x10(4x4 volt a dog�ban) k�tdimenzi�s t�mb  a param�tere �s viszaadja a soronk�nti
�tlagokat egy egydimenzi�s 10 m�ret� t�mbben*/
float* f2(int arr[][10])
{
	static float atlag[10];
	for (int j = 0; j < 10; j++)
	{
		float osszeg = 0;
		for (int i = 0; i < 10; i++)
		{
			osszeg += *(arr[j] + i);
		}
		atlag[j] = osszeg / 10;
	}
	return atlag;
	
}

float atlag(int arr[])
{
	static float atlag;

	float osszeg = 0;
	for (int i = 0; i < 5; i++)
	{
		osszeg += *(arr + i);
	}
	atlag = osszeg / 5;
	
	return atlag;
}
/* 3. feladat �rjon egy f�ggv�nyt, amelynek van egy integer (a), egy 10 m�ret� integer t�mb (tomb) �s m�g egy integer (b) param�tere,
visszat�r�si �rt�ke void, a f�ggv�ny m�solja be a t�mb b-edik elem�nek �rt�k�t az a integerbe*/
void f3(int& a,int tomb[10], int& b)
{
	a = tomb[b - 1];
}
/* 4. feladat: k�rjen be a felhaszn�l�t�l egy eg�sz sz�mot, majd a megadott sz�moss�g� sz�k�z n�lk�li stringet. �rja ki a k�perny�re
a legr�videbbet �s a leghosszabbat*/
void f4()
{
	int n;
	cout << "Adjon meg egy kivant mennyiseget: ";
	cin >> n;
	vector<string> words;
	for (int i = 0; i < n; i++)
	{
		string word;
		cout << "Adjon meg az " << i + 1 << ". szot: ";
		cin >> word;
		words.push_back(word);
	}

	string maxword = words[0];
	size_t maxlenght = words[0].length();
	string minword = words[0];
	size_t minlength = words[0].length();

	for (string w : words)
	{
		if (maxlenght <= w.length())
		{
			maxword = w;
			maxlenght = w.length();
		}
		if (minlength >= w.length())
		{
			minword = w;
			minlength = w.length();
		}
	}

	cout << "A leghosszabb beirt string: " << maxword << " | " << maxlenght << " hosszusaggal" << endl;
	cout << "A legrovidebb beirt string: " << minword << " | " << minlength << " hosszusaggal" << endl;
}
/*5. feladat. hozzon l�tre egy oszt�lyt vagy strukt�r�t doboz n�ven, amelynek van sz�less�ge, magass�ga �s m�lys�ge. T�lts�n fel egy 
5 m�ret� t�mb�t dobozokkal. �rja ki, hogy ha ezeket a dobozokat egym�s tetej�re tessz�k, milyen magas lesz a torony*/
class Doboz
{
public:
	int szelesseg;
	int magassag;
	int melyseg;

	Doboz(int width, int lenght, int depth)
	{
		this->szelesseg = width;
		this->magassag = lenght;
		this->melyseg = depth;
	}
	~Doboz()
	{

	}
};

int main()
{
	cout << "feladat ------------------- 1: " << endl;
	for (int i : f1(10, 30))
	{
		cout << i << endl;
	}
	cout << "feladat ------------------- 2: " << endl;
	int nums[10][10] =
	{
		{4, 6, 7, 3, 2, 1, 5, 6, 9, 10},
		{4, 2, 7, 3, 2, 1, 5, 6, 9, 10},
		{3, 6, 7, 3, 2, 1, 5, 6, 9, 10},
		{1, 6, 8, 3, 2, 1, 5, 6, 9, 10},
		{4, 6, 9, 3, 2, 1, 5, 6, 9, 10},
		{4, 6, 7, 1, 2, 1, 5, 6, 9, 10},
		{4, 6, 7, 3, 10, 1, 5, 6, 9, 10},
		{4, 6, 7, 3, 1, 1, 5, 6, 9, 10},
		{4, 6, 7, 6, 2, 1, 5, 6, 9, 10},
		{4, 2, 3, 3, 2, 1, 5, 6, 9, 10}
	};
	
	for (int i = 0; i < 10; i++)
	{
		cout << *(f2(nums) + i) << endl;
	}
	cout << "feladat ------------------- 3: " << endl;

	int num3[10] = { 1, 2, 3, 4, 5 ,6 ,7 ,8 ,9 ,10 };
	int a;
	int b = 5;
	f3(a, num3, b);
	cout << a << endl;
	cout << "feladat ------------------- 4: " << endl;
	f4();
	cout << "feladat ------------------- 5: " << endl;
	Doboz da(10, 20, 30);
	Doboz db(20, 30, 40);
	Doboz dc(30, 40, 50);
	Doboz dd(12, 12, 12);
	Doboz de(8, 8, 8);

	vector<Doboz> dobozok;
	dobozok.push_back(da);
	dobozok.push_back(db);
	dobozok.push_back(dc);
	dobozok.push_back(dd);
	dobozok.push_back(de);

	int dobozokmagsagga = 0;
	for (Doboz d : dobozok)
	{
		dobozokmagsagga += d.magassag;
	}
	cout << "A dobozok magassaga: " << dobozokmagsagga << endl;
	/*6. feladat. olvassa be a randomok.txt �llom�nyt egy tetsz�leges adatszerkezetbe. 
	Soronk�nt d�ntse el, hogy az adott sor �tlaga kisebb-e,
	mint 37. az eld�nt�s eredm�ny�t( Igen/Nem) �rja be soronk�nt a kisebb.txt-be*/
	cout << "feladat ------------------- 6: " << endl;

	vector<float> randomokatlag;
	vector<string> sor;
	ifstream random;
	random.open("random.txt");

	string sorok, szamok;
	
	while (getline(random, sorok))
	{
		stringstream ss(sorok);
		sor.push_back(sorok);

		float osszeg = 0;
		while (getline(ss, szamok, '	'))
		{
			int nums = stoi(szamok);
			osszeg += nums;
		}
		float atlag = osszeg / 5;
		randomokatlag.push_back(atlag);
	}

	float harminchet = randomokatlag[38];
	int rows = 0;
	for (float f : randomokatlag)
	{
		if (f < harminchet)
		{
			cout << sor[rows] << " " << f << " IGEN" << endl;
		}
		else
		{
			cout << sor[rows] << " " << f << " NEM" << endl;
		}
		rows++;
	}

	random.close();

}
