#pragma once
#include<string>

class AddressData{
	std::string City;
	std::string Street;
	int House;
	int Flat;
public:
	void SetCity(std::string& city) {
		this->City = city;
	}
	void SetStreet(std::string& street) {
		this->Street = street;
	}
	void SetHouse(int& house) {
		this->House = house;
	}
	void SetFlat(int& flat) {
		this->Flat = flat;
	}
	std::string GetCity() {
		return City;
	}
	std::string GetStreet() {
		return Street;
	}
	int GetHouse() {
		return House;
	}
	int GetFlat() {
		return Flat;
	}
};

