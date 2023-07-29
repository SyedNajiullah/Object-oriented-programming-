#pragma once
#include<iostream>
class Student
{
private:
	char* name;
	char* registrationNumber;
	char* city;
public:
	Student();
	Student(char* _name, char* _registrationNumber, char* _city);
	~Student();
	Student(const Student& student);
	Student& operator=(const Student& student);

	void setName(char* _name);
	void setRegistrationNumber(char* _registrationNumber);
	void setCity(char* _city);

	char* getName() const;
	char* getRegistrationNumber() const;
	char* getCity() const;

	void display() const;
};