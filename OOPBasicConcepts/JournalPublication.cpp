#include "JournalPublication.h"


JournalPublication::JournalPublication(char *_name, double _price) :Publication(_name, _price)
{
}
JournalPublication::JournalPublication(const JournalPublication & obj) : Publication(obj)
{
}
JournalPublication & JournalPublication ::operator=(const JournalPublication & obj)
{
	Publication::operator=(obj);
	return *this;
}
void JournalPublication::display() const
{
	cout << "Type: Journal Publication - Title: " << name << "; Price: $" << price << endl;
}
JournalPublication::~JournalPublication()
{
	cout << "~JournalPublication()" << endl;
}
