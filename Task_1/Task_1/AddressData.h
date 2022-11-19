#pragma once
#include<string>

class AddressData {
private:
	std::string city;
	std::string street;
	int numHouse;
	int numFlat;
public:
	void setCity(std::string& Temp) {
		this->city = Temp;
	}
	void setStreet(std::string& Temp) {
		this->street = Temp;
	}
	void setHouse(int& Temp) {
		this->numHouse = Temp;
	}
	void setFlat(int& Temp) {
		this->numFlat = Temp;
	}
	std::string getCity() {
		return city;
	}
	std::string getStreet() {
		return street;
	}
	int getHouse() {
		return numHouse;
	}
	int getFlat() {
		return numFlat;
	}
};


