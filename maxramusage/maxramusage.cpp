#include <iostream>
#include <windows.h>
using namespace std;

float maxmem()
{
	//mem�ria m�ret lek�rdez�se
	MEMORYSTATUSEX status;
	status.dwLength = sizeof(status);
	GlobalMemoryStatusEx(&status);

	float maxmem = status.ullTotalPhys / 4; //maxim�lis el�rhet� byte osztva az int byte m�ret�vel
	return maxmem;
}


int main()
{
	int i;
	cout << "Adja meg a maximum memorianak lefoglalni kivant reszet (1 - a maximum 2 - a fele 3 - a harmada)" << endl;
	cin >> i;

	int* asd = new int[maxmem() / i]; // ujj memoriahely lefoglal�sa  
	cin >> i;
}

//MEGJEGYZ�S: A program nem az el�rhet� mem�ri�t n�zi hanem mag�nak a g�pnek a maxim�lis mem�ria sz�mj�t vagyis a virtu�lis mem�ri�t is lefoglal a program!!!