#pragma once
#include "Publication.h"
class BookPublication :public Publication
{
public:
	BookPublication(char *_name = nullptr, double _price = 0);
	BookPublication(const BookPublication & obj);
	BookPublication & operator=(const BookPublication & obj);
	~BookPublication();

	void display() const;
};

