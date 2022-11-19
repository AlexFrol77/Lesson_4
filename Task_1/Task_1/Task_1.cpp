#include"AddressData.h"
#include"Work.h"


int main(int argc, char** argv) {

	setlocale(LC_ALL, "Rus");
	
	Work work;
	work.setSize();
	AddressData* Addr = work.getArr();
	work.getAddr(Addr);
	work.revers(Addr);
	work.setOut(Addr);
	work.deleteArr(Addr);

	return 0;
}