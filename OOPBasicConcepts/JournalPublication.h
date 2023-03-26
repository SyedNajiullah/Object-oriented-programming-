#pragma once
#include "Publication.h"
class JournalPublication :public Publication
{
public:
	JournalPublication(char *_name = nullptr, double _price = 0);
	JournalPublication(const JournalPublication & obj);
	JournalPublication & operator=(const JournalPublication& obj);
	~JournalPublication();

	void display() const;
};

