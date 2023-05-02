#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
Írjon függvényt, amely paramétere egy integer, és megszámolja, hogy az adott számot hány számmal tudjuk osztani úgy, hogy 0 maradék képzõdjön
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
Írjon függvényt, amelynek 2 integer paramétere van, és kiírja 100-ig azokat a számokat, amelyek oszthatóak a megadott 2 számmal.
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
Írjon függvényt, amelynek egy 10 méretû integer tömb a paramétere, és visszaadja a maximumot.
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
Írjon függvényt, amelynek egy 10 méretû integer tömb a paramétere, és visszaadja a minimumot.
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
Írjon függvényt, amelynek egy 10 méretû integer tömb a paramétere, és visszaadja a leggyakoribb elemet.
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
Írjon függvényt, amelynek egy 10 méretû integer tömb és egy egész szám a paramétere, majd rendezi a második paramétertõl a tömböt.
Pl 5, akkor a tömb 5.elemétõl rendezi.
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
Írjon függvényt, amelynek egy 10 méretû integer tömb a paramétere, és csökkenõ sorrendben rendezi azt.
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
Írjon függvényt, amelyben referencia szerinti paraméterátadást használ, és csökkenti a paraméter értékét.
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
	Kérjünk be 5 számot a felhasználótól és írjuk ki az átlag felettieket.
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

