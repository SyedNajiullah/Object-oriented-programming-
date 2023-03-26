#pragma once
#include "Publication.h"
class MagazinePublication :public Publication
{
public:
	MagazinePublication(char *_name = nullptr, double _price = 0);
	MagazinePublication(const MagazinePublication &obj);
	MagazinePublication & operator=(const MagazinePublication& obj);
	~MagazinePublication();

	void display() const;
};

