#pragma once
#include<iostream>
class Instructor
{
private:
	char* name;
	char* education;
public:
	Instructor();
	Instructor(char* _name, char* _education);
	~Instructor();
	Instructor(const Instructor& instructor);
	Instructor& operator=(const Instructor& instructor);

	void setName(char* _name);
	void setEdcation(char* _education);

	char* getName() const;
	char* getEducation() const;

	void display() const;
};

