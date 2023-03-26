#include "Publication.h"


Publication::Publication(char *_name, double _price)
{
	int l = 0;
	for (int i = 0; _name[i] != '\0'; i++)
		l++;
	name = new char[l + 1];
	int j = 0;
	for (; j < l; j++)
		name[j] = _name[j];
	name[j] = '\0';

	price = _price;

	totalPrice += price;
}

Publication::Publication(const Publication & obj)
{
	int l = 0;
	for (int i = 0; obj.name[i] != '\0'; i++)
		l++;
	name = new char[l + 1];
	int j = 0;
	for (; j < l; j++)
		name[j] = obj.name[j];
	name[j] = '\0';

	price = obj.price;
}
Publication & Publication ::operator=(const Publication & obj)
{
	int l = 0;
	for (int i = 0; obj.name[i] != '\0'; i++)
		l++;
	name = new char[l + 1];
	int j = 0;
	for (; j < l; j++)
		name[j] = obj.name[j];
	name[j] = '\0';

	price = obj.price;
	return *this;
}
double Publication::getTotalPrice()
{
	return totalPrice;
}
Publication::~Publication()
{
	cout << "~Publucation()" << endl;
	delete[]name;
	name = nullptr;
	price = 0.0;
}
