#pragma once
#include<iostream>
using namespace std;
class Publication
{
protected:
	static double totalPrice;
	char *name;
	double price;
public:
	Publication(char *_name = nullptr, double _price = 0);
	Publication(const Publication & obj);
	Publication & operator=(const Publication & obj);
	virtual ~Publication();
	virtual void display() const = 0;
	static double getTotalPrice();
};

