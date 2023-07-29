#include "Student.h"
Student::Student()
{
	name = nullptr;
	registrationNumber = nullptr;
	city = nullptr;
}
Student::~Student()
{
	if (name != nullptr){
		delete[] name;
		name = nullptr;
	}
	if (registrationNumber != nullptr){
		delete[] registrationNumber;
		registrationNumber = nullptr;
	}
	if (city != nullptr){
		delete[] city;
		city = nullptr;
	}
}
Student::Student(char* _name, char* _registrationNumber, char* _city){
	if (_name == nullptr){
		name = nullptr;
	}
	else{
		int lenghtOfName = strlen(_name);
		name = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			name[i] = _name[i];
		}
		name[lenghtOfName] = '\0';
	}
	if (_registrationNumber == nullptr){
		registrationNumber = nullptr;
	}
	else{
		int lenghtOfRegistrationNumber = strlen(_registrationNumber);
		registrationNumber = new char[lenghtOfRegistrationNumber + 1];
		for (int i = 0; i < lenghtOfRegistrationNumber; ++i){
			registrationNumber[i] = _registrationNumber[i];
		}
		registrationNumber[lenghtOfRegistrationNumber] = '\0';
	}
	if (_city == nullptr){
		city = nullptr;
	}
	else{
		int lenghtOfCity = strlen(_city);
		city = new char[lenghtOfCity + 1];
		for (int i = 0; i < lenghtOfCity; ++i){
			city[i] = _city[i];
		}
		city[lenghtOfCity] = '\0';
	}
}
Student::Student(const Student& student){
	if (student.name == nullptr){
		name = nullptr;
	}
	else{
		int lenghtOfName = strlen(student.name);
		name = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			name[i] = student.name[i];
		}
		name[lenghtOfName] = '\0';
	}
	if (student.registrationNumber == nullptr){
		registrationNumber = nullptr;
	}
	else{
		int lenghtOfRegistrationNumber = strlen(student.registrationNumber);
		registrationNumber = new char[lenghtOfRegistrationNumber + 1];
		for (int i = 0; i < lenghtOfRegistrationNumber; ++i){
			registrationNumber[i] = student.registrationNumber[i];
		}
		registrationNumber[lenghtOfRegistrationNumber] = '\0';
	}
	if (student.city == nullptr){
		city = nullptr;
	}
	else{
		int lenghtOfCity = strlen(student.city);
		city = new char[lenghtOfCity + 1];
		for (int i = 0; i < lenghtOfCity; ++i){
			city[i] = student.city[i];
		}
		city[lenghtOfCity] = '\0';
	}
}
Student& Student::operator=(const Student& student){
	if (student.name == nullptr){
		name = nullptr;
	}
	else{
		int lenghtOfName = strlen(student.name);
		name = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			name[i] = student.name[i];
		}
		name[lenghtOfName] = '\0';
	}
	if (student.registrationNumber == nullptr){
		registrationNumber = nullptr;
	}
	else{
		int lenghtOfRegistrationNumber = strlen(student.registrationNumber);
		registrationNumber = new char[lenghtOfRegistrationNumber + 1];
		for (int i = 0; i < lenghtOfRegistrationNumber; ++i){
			registrationNumber[i] = student.registrationNumber[i];
		}
		registrationNumber[lenghtOfRegistrationNumber] = '\0';
	}
	if (student.city == nullptr){
		city = nullptr;
	}
	else{
		int lenghtOfCity = strlen(student.city);
		city = new char[lenghtOfCity + 1];
		for (int i = 0; i < lenghtOfCity; ++i){
			city[i] = student.city[i];
		}
		city[lenghtOfCity] = '\0';
	}
	return *this;
}

void Student::setName(char* _name){
	if (_name == nullptr){
		name = nullptr;
	}
	else{
		int lenghtOfName = strlen(_name);
		name = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			name[i] = _name[i];
		}
		name[lenghtOfName] = '\0';
	}
}
void Student::setRegistrationNumber(char* _registrationNumber){
	if (_registrationNumber == nullptr){
		registrationNumber = nullptr;
	}
	else{
		int lenghtOfRegistrationNumber = strlen(_registrationNumber);
		registrationNumber = new char[lenghtOfRegistrationNumber + 1];
		for (int i = 0; i < lenghtOfRegistrationNumber; ++i){
			registrationNumber[i] = _registrationNumber[i];
		}
		registrationNumber[lenghtOfRegistrationNumber] = '\0';
	}
}
void Student::setCity(char* _city){
	if (_city == nullptr){
		city = nullptr;
	}
	else{
		int lenghtOfCity = strlen(_city);
		city = new char[lenghtOfCity + 1];
		for (int i = 0; i < lenghtOfCity; ++i){
			city[i] = _city[i];
		}
		city[lenghtOfCity] = '\0';
	}
}

char* Student::getName() const{
	if (name == nullptr){
		return nullptr;
	}
	else{
		int lenghtOfName = strlen(name);
		char* rName = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			rName[i] = name[i];
		}
		rName[lenghtOfName] = '\0';
		return rName;
	}
}
char* Student::getRegistrationNumber() const{
	if (registrationNumber == nullptr){
		return nullptr;
	}
	else{
		int lenghtOfRegistrationNumber = strlen(registrationNumber);
		char* rRegistrationNumber = new char[lenghtOfRegistrationNumber + 1];
		for (int i = 0; i < lenghtOfRegistrationNumber; ++i){
			rRegistrationNumber[i] = registrationNumber[i];
		}
		rRegistrationNumber[lenghtOfRegistrationNumber] = '\0';
		return rRegistrationNumber;
	}
}
char* Student::getCity() const{
	if (city == nullptr){
		return nullptr;
	}
	else{
		int lenghtOfCity = strlen(city);
		char* rCity = new char[lenghtOfCity + 1];
		for (int i = 0; i < lenghtOfCity; ++i){
			rCity[i] = city[i];
		}
		rCity[lenghtOfCity] = '\0';
		return rCity;
	}
}

void Student::display() const{
	if (name == nullptr){
		std::cout << "Name : nullptr" << std::endl;
	}
	else{
		std::cout << "Name : " << name << std::endl;
	}
	if (registrationNumber == nullptr){
		std::cout << "Registration Number : nullptr" << std::endl;
	}
	else{
		std::cout << "Registration Number : " << registrationNumber << std::endl;
	}
	if (city == nullptr){
		std::cout << "City : nullptr" << std::endl;
	}
	else{
		std::cout << "City : " << city << std::endl;
	}
}