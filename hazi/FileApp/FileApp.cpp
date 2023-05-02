#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int num;
	vector<int> intnums;

	ifstream lotto;
	lotto.open("lotto.txt");
	string szamok;
	while (getline(lotto, szamok, '	'))
	{
		num = stoi(szamok);
		intnums.push_back(num);
	}
	lotto.close();

	int rear[5][2];

	for (int i = 1; i <= intnums.size() - 1; i++)
	{
		int index;
		if (intnums[i] < intnums[i - 1])
		{
			index = intnums[i];
			intnums[i] = intnums[i - 1];
			intnums[i - 1] = index;
			i = 0;
		}
	}

	for (int i = 0; i <= intnums.size() - 1; i++)
	{
		int index = 0;
		for (int j = 0; j <= intnums.size() - 1; j++)
		{
			if (intnums[i] == intnums[j])
			{
				index++;
			}
		}

		for (int j = 0; j < 5; j++)
		{
			if (rear[j][1] > index)
			{
				rear[j][0] = intnums[i];
				rear[j][1] = index;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << rear[i][0] << " | " << rear[i][1] << endl;
	}


}
