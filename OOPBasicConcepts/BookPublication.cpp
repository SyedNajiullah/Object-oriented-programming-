#include "BookPublication.h"


BookPublication::BookPublication(char *_name, double _price) :Publication(_name,_price)
{
}
BookPublication::BookPublication(const BookPublication & obj) : Publication(obj)
{
}
BookPublication & BookPublication ::operator=(const BookPublication & obj)
{
	Publication::operator=(obj);
	return *this;
}
void BookPublication::display() const
{
	cout << "Type: Book Publication - Title: " << name << "; Price: $" << price << endl;
}
BookPublication::~BookPublication()
{
	cout << "~BookPublication()" << endl;
}
