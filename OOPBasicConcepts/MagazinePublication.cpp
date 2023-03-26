#include "MagazinePublication.h"


MagazinePublication::MagazinePublication(char *_name, double _price) :Publication(_name ,_price)
{
}
MagazinePublication::MagazinePublication(const MagazinePublication & obj) : Publication(obj)
{
}
MagazinePublication & MagazinePublication ::operator=(const MagazinePublication & obj)
{
	Publication::operator=(obj);
	return *this;
}
void MagazinePublication::display() const
{
	cout << "Type: Magazine Publication - Title: " << name << "; Price: $" << price << endl;
}

MagazinePublication::~MagazinePublication()
{
	cout << "~MagazinePublication()" << endl;
}
