#include "OperatorOverloading.h"
OperatorOverloading::OperatorOverloading(){
	dummyName = nullptr;
	dummyInteger = 0;
}
OperatorOverloading::~OperatorOverloading(){
	if (dummyName != nullptr){
		delete[]dummyName;
		dummyName = nullptr;
	}
	dummyInteger = 0;
}
OperatorOverloading::OperatorOverloading(char* _dummyName, int _dummyInteger){
	if (_dummyName == nullptr){
		dummyName = nullptr;
	}
	else{
		int length = strlen(_dummyName);
		dummyName = new char[length + 1];
		for (int i = 0; i < length; i++){
			dummyName[i] = _dummyName[i];
		}
		dummyName[length] = '\0';
	}
	dummyInteger = _dummyInteger;
}
// COPY CONSTRCTOR //
OperatorOverloading::OperatorOverloading(const OperatorOverloading& obj){
	if (obj.dummyName == nullptr){
		dummyName = nullptr;
	}
	else{
		int length = strlen(obj.dummyName);
		dummyName = new char[length + 1];
		for (int i = 0; i < length; i++){
			dummyName[i] = obj.dummyName[i];
		}
		dummyName[length] = '\0';
	}
	dummyInteger = obj.dummyInteger;
}
// ASSIGMENT OPERATOR //
OperatorOverloading& OperatorOverloading::operator=(const OperatorOverloading& obj){
	if (obj.dummyName == nullptr){
		dummyName = nullptr;
	}
	else{
		int length = strlen(obj.dummyName);
		dummyName = new char[length + 1];
		for (int i = 0; i < length; i++){
			dummyName[i] = obj.dummyName[i];
		}
		dummyName[length] = '\0';
	}
	dummyInteger = obj.dummyInteger;
	return *this;
}
// INDEXING OPERAOTR //
char& OperatorOverloading::operator[](int index){
	return dummyName[index];
}
// PREINCREMENT OPERATORS //
OperatorOverloading& OperatorOverloading::operator++(){
	dummyInteger++;
	return *this;
}
OperatorOverloading& OperatorOverloading::operator--(){
	dummyInteger--;
	return *this;
}
// POST INCREMENT OPERATORS //
OperatorOverloading OperatorOverloading::operator++(int){
	OperatorOverloading obj = *this;
	dummyInteger++;
	return obj;
}
OperatorOverloading OperatorOverloading::operator--(int){
	OperatorOverloading obj = *this;
	dummyInteger--;
	return obj;
}
// MULTIPLY //
OperatorOverloading OperatorOverloading::operator*(const OperatorOverloading& obj){
	OperatorOverloading newObject = *this;
	newObject.dummyInteger = dummyInteger * obj.dummyInteger;
	return newObject;
}
// DIVIDE //
OperatorOverloading OperatorOverloading::operator/(const OperatorOverloading& obj){
	OperatorOverloading newObject = *this;
	newObject.dummyInteger = dummyInteger / obj.dummyInteger;
	return newObject;
}
// OPERATOR PLUS //
OperatorOverloading OperatorOverloading::operator+(const OperatorOverloading& obj){
	OperatorOverloading newObject = *this;
	newObject.dummyInteger = dummyInteger + obj.dummyInteger;
	return newObject;
}
// OPERATOR MINUS //
OperatorOverloading OperatorOverloading::operator-(const OperatorOverloading& obj){
	OperatorOverloading newObject = *this;
	newObject.dummyInteger = dummyInteger - obj.dummyInteger;
	return newObject;
}
// BOOLEAN OPERATORS //
bool OperatorOverloading::operator<(const OperatorOverloading& obj){
	return (dummyInteger < obj.dummyInteger);
}
bool OperatorOverloading::operator>(const OperatorOverloading& obj){
	return (dummyInteger > obj.dummyInteger);
}
bool OperatorOverloading::operator<=(const OperatorOverloading& obj){
	return (dummyInteger <= obj.dummyInteger);
}
bool OperatorOverloading::operator>=(const OperatorOverloading& obj){
	return (dummyInteger >= obj.dummyInteger);
}
bool OperatorOverloading::operator==(const OperatorOverloading& obj){
	return(dummyInteger == obj.dummyInteger);
}
// UNIARY PLUS MINUS //
OperatorOverloading OperatorOverloading::operator+(){
	return *this;
}
OperatorOverloading OperatorOverloading::operator-(){
	dummyInteger = dummyInteger * (-1);
	return *this;
}
// STREAM INSERTION AND EXSERTION //
std::ostream& operator<<(std::ostream& os, const OperatorOverloading& obj){
	if (obj.dummyName == nullptr){
		os << "Name : nullptr" << std::endl;
	}
	else{
		os << "Name : "<< obj.dummyName << std::endl;
	}
	os << "Integer : " << obj.dummyInteger << std::endl;
	return os;
}
std::istream& operator>>(std::istream& in, OperatorOverloading& obj){
	obj.dummyName = new char[50];
	std::cout << "Enter array :";
	in.getline(obj.dummyName, 50);
	std::cout << "Enter integer : ";
	in >> obj.dummyInteger;
	return in;
}