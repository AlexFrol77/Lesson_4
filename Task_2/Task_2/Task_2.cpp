#include<windows.h>
#include"AddressData.h"
#include"WorkAddr.h"


int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	WorkAddr work;
	AddressData* Addr = work.GetArrAddr();
	work.Sorting(Addr);
	work.OutputFile(Addr);
	//work.PrintConsole(Addr);
	work.Delete(Addr);

	return 0;
}