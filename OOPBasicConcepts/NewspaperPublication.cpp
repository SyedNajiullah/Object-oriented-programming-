#include "NewspaperPublication.h"


NewspaperPublication::NewspaperPublication(char *_name, double _price) :Publication(_name, _price)
{
}
NewspaperPublication::NewspaperPublication(const NewspaperPublication & obj) : Publication(obj)
{
}
NewspaperPublication & NewspaperPublication ::operator=(const NewspaperPublication & obj)
{
	Publication::operator=(obj);
	return *this;
}
void NewspaperPublication::display() const
{
	cout << "Type: Newspaper Publication - Title: " << name << "; Price: $" << price << endl;
}
NewspaperPublication::~NewspaperPublication()
{
	cout << "~NewspaperPublication()" << endl;
}
