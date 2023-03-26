#pragma once
#include "Publication.h"
class NewspaperPublication :public Publication
{
public:
	NewspaperPublication(char *_name = nullptr, double _price = 0);
	NewspaperPublication(const NewspaperPublication & obj);
	NewspaperPublication & operator=(const NewspaperPublication & obj);
	~NewspaperPublication();

	void display() const;
};

