#pragma once
#include<iostream>
class OperatorOverloading
{
private:
	char* dummyName;
	int dummyInteger;
public:
	OperatorOverloading();
	~OperatorOverloading();
	OperatorOverloading(char* _dummyName, int _dummyInteger);
	// COPY CONSTRCTOR //
	OperatorOverloading(const OperatorOverloading& obj);
	// ASSIGMENT OPERATOR //
	OperatorOverloading& operator=(const OperatorOverloading& obj);
	// INDEXING OPERAOTR //
	char& operator[](int index);
	// PREINCREMENT OPERATORS //
	OperatorOverloading& operator++();
	OperatorOverloading& operator--();
	// POST INCREMENT OPERATORS //
	OperatorOverloading operator++(int);
	OperatorOverloading operator--(int);
	// MULTIPLY //
	OperatorOverloading operator*(const OperatorOverloading& obj);
	// DIVIDE //
	OperatorOverloading operator/(const OperatorOverloading& obj);
	// OPERATOR PLUS //
	OperatorOverloading operator+(const OperatorOverloading& obj);
	// OPERATOR MINUS //
	OperatorOverloading operator-(const OperatorOverloading& obj);
	// BOOLEAN OPERATORS //
	bool operator<(const OperatorOverloading& obj);
	bool operator>(const OperatorOverloading& obj);
	bool operator<=(const OperatorOverloading& obj);
	bool operator>=(const OperatorOverloading& obj);
	bool operator==(const OperatorOverloading& obj);
	// UNIARY PLUS MINUS //
	OperatorOverloading operator+();
	OperatorOverloading operator-();
	// STREAM INSERTION AND EXSERTION //
	friend std::ostream& operator<<(std::ostream& os, const OperatorOverloading& obj);
	friend std::istream& operator>>(std::istream& in, OperatorOverloading& obj);
};

