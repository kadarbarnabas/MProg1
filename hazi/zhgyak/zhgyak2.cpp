#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
�rjon f�ggv�nyt, amely param�tere egy integer, �s megsz�molja, hogy az adott sz�mot h�ny sz�mmal tudjuk osztani �gy, hogy 0 marad�k k�pz�dj�n
*/
int f1(int p1)
{
	int osztok = 0;
	for (int i = 1; i <= p1; i++)
	{
		if (p1 % i == 0)
		{
			osztok++;
		}
	}

	return osztok;
}

/*
�rjon f�ggv�nyt, amelynek 2 integer param�tere van, �s ki�rja 100-ig azokat a sz�mokat, amelyek oszthat�ak a megadott 2 sz�mmal.
*/
void f2(int p1, int p2)
{
	cout << "feladat 2: ";
	for (int i = 0; i <= 100; i++)
	{
		if (i % p1 == 0 && i % p2 == 0)
		{
			cout << i << endl;
		}
	}
}
/*
�rjon f�ggv�nyt, amelynek egy 10 m�ret� integer t�mb a param�tere, �s visszaadja a maximumot.
*/
int f3(int array[], int len)
{
	int max = array[0];
	for (int i = 0; i < len; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}
/*
�rjon f�ggv�nyt, amelynek egy 10 m�ret� integer t�mb a param�tere, �s visszaadja a minimumot.
*/
int f4(int array[], int len)
{
	int min = array[0];
	for (int i = 0; i < len; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	return min;
}
/*
�rjon f�ggv�nyt, amelynek egy 10 m�ret� integer t�mb a param�tere, �s visszaadja a leggyakoribb elemet.
*/
int f5(int array[], int len)
{
	for (int i = 0; i <= len - 1; i++)
	{
		int index;
		if (array[i] < array[i - 1])
		{
			index = array[i];
			array[i] = array[i - 1];
			array[i - 1] = index;
			i = 0;
		}
	}
	
	int commonity = 0;
	int common = array[0];
	for (int i = 0; i <= len - 1; i++)
	{
		int index = 0;
		for (int j = 0; j <= len - 1; j++)
		{
			if (array[i] == array[j])
			{
				index++;
			}
		}

		if (index > commonity)
		{
			commonity = index;
			common = array[i];
		}
	}

	return common;
	
}
/*
�rjon f�ggv�nyt, amelynek egy 10 m�ret� integer t�mb �s egy eg�sz sz�m a param�tere, majd rendezi a m�sodik param�tert�l a t�mb�t.
Pl 5, akkor a t�mb 5.elem�t�l rendezi.
*/

void f6(int array[], int len, int p1)
{
	if (p1 >= len)
	{
		p1 = len;
		for (int i = p1; i <= len - 1; i++)
		{
			int index;
			if (array[i] < array[i - 1])
			{
				index = array[i];
				array[i] = array[i - 1];
				array[i - 1] = index;
				i = p1;
			}
		}
	}
	else
	{
		for (int i = p1; i <= len - 1; i++)
		{
			int index;
			if (array[i] < array[i - 1])
			{
				index = array[i];
				array[i] = array[i - 1];
				array[i - 1] = index;
				i = p1;
			}
		}
	}
	
}
/*
�rjon f�ggv�nyt, amelynek egy 10 m�ret� integer t�mb a param�tere, �s cs�kken� sorrendben rendezi azt.
*/
void f7(int array[], int len)
{
	for (int i = 1; i <= len - 1; i++)
	{
		int index;
		if (array[i] > array[i - 1])
		{
			index = array[i];
			array[i] = array[i - 1];
			array[i - 1] = index;
			i = 0;
		}
	}
}
/*
�rjon f�ggv�nyt, amelyben referencia szerinti param�ter�tad�st haszn�l, �s cs�kkenti a param�ter �rt�k�t.
*/
int f8(int &p1, int &p2)
{
	return p1 - p2;
}
float atlag(vector<int> nums)
{
	float osszeg = 0;
	for (float i : nums)
	{
		osszeg += i;
	}
	
	return osszeg / nums.size();
}
int main()
{
    cout << "Feladat 1: " << f1(10) << endl;
	f2(3, 5);
	int nums[10] = {5, 4, 2, 1, 10, 34, 5, 5, 9, 10};
	int arrayLength = sizeof(nums) / sizeof(int);
	cout << "Tomb merete: " << arrayLength << endl;
	cout << "feladat 3: " << f3(nums, arrayLength) << endl;
	cout << "feladat 4: " <<f4(nums, arrayLength) << endl;
	cout << "feladat 5: " << f5(nums, arrayLength) << endl;;
	cout << "feladat 6: " << endl;
	int nums2[10] = { 5, 4, 2, 1, 10, 34, 5, 5, 10, 9 };
	int arrayLength2 = sizeof(nums2) / sizeof(int);
	f6(nums2, arrayLength2, 10);
	for (int i = 0; i <= arrayLength2 - 1; i++)
	{
		cout << nums2[i] << endl;
	}
	cout << "feladat 7: " << endl;
	f7(nums2, arrayLength2);
	for (int i = 0; i <= arrayLength2 - 1; i++)
	{
		cout << nums2[i] << endl;
	}
	int p1 = 4;
	int p2 = 5;
	cout << "feladat 8: " << f8(p1, p2) << endl;
	cout << "Adjon meg 5 szamot-----------Adjon meg 5 szamot" << endl;;
	/*
	K�rj�nk be 5 sz�mot a felhaszn�l�t�l �s �rjuk ki az �tlag felettieket.
	*/
	vector<int> usernums;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ". szam: ";
		int input;
		cin >> input;

		usernums.push_back(input);
	}
	cout << "A beirt szamok atlaga: " << atlag(usernums) << endl;
	cout << "Az atlag feletti szamok--------------Az atlag feletti szamok" << endl;
	for (int i : usernums)
	{
		if (i > atlag(usernums))
		{
			cout << i << endl;
		}
	}
}

