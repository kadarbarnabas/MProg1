/*1. (param�ter�tad�s gyakorl�s)Legyen egy strukt�ra egy szem�lyre alapadatokkal,
majd egy f�ggv�ny sz�m�tsa ki, hogy mennyi kal�ri�t kell bevinnie. Legyen egy f�ggv�ny,
aminek a bemenete, hogy mennyi ban�nt fogyasztott, �s ez alapj�n cs�kkenti a napi fennmarad� kal�riaig�nyt.
Egy f�ggv�ny adja meg, hogy mennyi ban�nt kell megennie ma, hogy 0-ra j�jj�n ki.
*/
#include <iostream>
#include <string>
using namespace std;

int kaloriaszamitas(string nem, int suly, int magassag, int eletkor)
{
	if (nem == "f")
	{
		return (66.46 + (13.7 * suly) + (5 * magassag) - (6.8 * eletkor)); //Harris-Beneditct-k�plet
	}
	else
	{
		return (655.1 + (9.6 * suly) + (1.8 * magassag) - (4.7 * eletkor));	//Harris-Beneditct-k�plet
	}
}

int bananeves(int n, int kcal ) //89 kcal
{
	return kcal -= n * 89;
}

int maradek_banan(double kcal)
{
	int i = 0;
	while (kcal >= 0)
	{
		kcal -= 89;
		i++;
	}

	return i;
}


int main()
{
	struct Szemely
	{
		int eletkor;
		int suly;
		int magassag;
		int napikaloria;
		string nem;

	};

	Szemely szemely1;

	cout << "Adja meg a korat!: ";
	cin >> szemely1.eletkor;

	cout << "Adja meg a sulyat!: ";
	cin >> szemely1.suly;

	cout << "Adja meg a magassagat!: ";
	cin >> szemely1.magassag;

	cout << "Adja meg a nemet!(F / N): ";
	cin >> szemely1.nem;

	szemely1.napikaloria = kaloriaszamitas(szemely1.nem, szemely1.suly, szemely1.magassag, szemely1.eletkor);
	cout << szemely1.napikaloria << endl;

	int banan;
	cout << "Adja meg a mennyi banant evett meg!: ";
	cin >> banan;

	szemely1.napikaloria = bananeves(banan, szemely1.napikaloria);
	cout << "A napi fent marado kaloria igeny: " << szemely1.napikaloria << " kcal" << endl << endl;;

	cout << "Meg " << maradek_banan(szemely1.napikaloria) << " banant kell meg elfogyasztania hogy kielegitse a napi kcal bevitelt" << endl;






}
