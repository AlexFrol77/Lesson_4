#pragma once
#include<iostream>
#include<fstream>
#include"AddressData.h"

class WorkAddr {
private:
	int sizeArr;
public:
	AddressData* GetArrAddr() {
		int TempInt;
		std::string TempStr;
		std::ifstream fin("in.txt");
		fin >> TempInt;
		AddressData* Address = new AddressData[TempInt];
		this->sizeArr = TempInt;
		for (int i = 0; i < sizeArr; i++) {
			fin >> TempStr;
			Address[i].SetCity(TempStr);
			fin >> TempStr;
			Address[i].SetStreet(TempStr);
			fin >> TempInt;
			Address[i].SetHouse(TempInt);
			fin >> TempInt;
			Address[i].SetFlat(TempInt);
		}
		return Address;
	}
	void Sorting(AddressData* obj) {
		AddressData temp;
		int Flag = 1;
		while (Flag != 0) {
			Flag = 0;
			for (int i = 1; i < sizeArr; i++) {
				if (obj[i - 1].GetCity() > obj[i].GetCity()) {
					temp = obj[i - 1];
					obj[i - 1] = obj[i];
					obj[i] = temp;
					Flag++;
				}
			}
		}
	}
	void OutputFile(AddressData* Obj) {
		std::ofstream fout("out.txt", std::ios::trunc);
		fout << sizeArr << std::endl;
		fout.close();
		std::ofstream FOUT("out.txt", std::ios::app);
		for (int i = 0; i < sizeArr; i++) {
			FOUT << Obj[i].GetCity() << " " << Obj[i].GetStreet() << " " << Obj[i].GetHouse() << " " << Obj[i].GetFlat() << std::endl;
		}
		FOUT.close();
	}
	void PrintConsole(AddressData* obj) {
		for (int i = 0; i < sizeArr; i++) {
			std::cout << "Город: " << obj[i].GetCity() << std::endl;
			std::cout << "Улица: " << obj[i].GetStreet() << std::endl;
			std::cout << "Дом: " << obj[i].GetHouse() << std::endl;
			std::cout << "Квартира: " << obj[i].GetFlat() << std::endl;
		}
	}
	void Delete(AddressData* obj) {
		delete[] obj;
	}
};

