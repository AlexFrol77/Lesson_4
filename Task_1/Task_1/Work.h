#pragma once
#include<fstream>
#include"AddressData.h"

class Work {
private:
	int size;
public:
	AddressData* getArr() {
		AddressData* Addr = new AddressData[size];
		return Addr;
	}
	void setSize() {
		std::ifstream fin("in.txt");
		fin >> size;
	}
	void getAddr(AddressData* Addr) {
		std::ifstream fin("in.txt");
		fin.seekg(2);
		for (int i = 0; i < size; i++) {
			std::string TempStr;
			int TempInt;
			fin >> TempStr;
			Addr[i].setCity(TempStr);
			fin >> TempStr;
			Addr[i].setStreet(TempStr);
			fin >> TempInt;
			Addr[i].setHouse(TempInt);
			fin >> TempInt;
			Addr[i].setFlat(TempInt);
		}
		fin.close();
	}
	void revers(AddressData* Obj) {
		for (int i = 0; i < size / 2; i++) {
			AddressData Temp = Obj[i];
			Obj[i] = Obj[(size - 1) - i];
			Obj[(size - 1) - i] = Temp;
		}
	}
	void setOut(AddressData* Obj) {
		std::ofstream fout("out.txt", std::ios::trunc);
		fout << size << std::endl;
		for (int i = 0; i < size; i++) {
			fout << Obj[i].getCity() << " " << Obj[i].getStreet() << " " << Obj[i].getHouse() << " " << Obj[i].getFlat() << std::endl;
		}
		fout.close();
	}
	void deleteArr(AddressData* Addr) {
		delete[] Addr;
	}
};

