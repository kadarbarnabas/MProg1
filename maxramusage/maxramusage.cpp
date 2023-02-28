#include <iostream>
#include <windows.h>
using namespace std;

float maxmem()
{
	//memória méret lekérdezése
	MEMORYSTATUSEX status;
	status.dwLength = sizeof(status);
	GlobalMemoryStatusEx(&status);

	float maxmem = status.ullTotalPhys / 4; //maximális elérhetõ byte osztva az int byte méretével
	return maxmem;
}


int main()
{
	int i;
	cout << "Adja meg a maximum memorianak lefoglalni kivant reszet (1 - a maximum 2 - a fele 3 - a harmada)" << endl;
	cin >> i;

	int* asd = new int[maxmem() / i]; // ujj memoriahely lefoglalása  
	cin >> i;
}

//MEGJEGYZÉS: A program nem az elérhetõ memóriát nézi hanem magának a gépnek a maximális memória számját vagyis a virtuális memóriát is lefoglal a program!!!