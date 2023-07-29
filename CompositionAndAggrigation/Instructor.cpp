#include "Instructor.h"

Instructor::Instructor(){
	name = nullptr;
	education = nullptr;
}
Instructor::Instructor(char* _name, char* _education){
	if (_name == nullptr){
		name = nullptr;
	}
	else{
		int lenghtOfName = strlen(_name);
		name = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			name[i] = _name[i];
		}
		name[lenghtOfName] = '\0';
	}
	if (_education == nullptr){
		education = nullptr;
	}
	else{
		int lenghtOfEducation = strlen(_education);
		education = new char[lenghtOfEducation + 1];
		for (int i = 0; i < lenghtOfEducation; ++i){
			education[i] = _name[i];
		}
		education[lenghtOfEducation] = '\0';
	}
}
Instructor::~Instructor(){
	if (name != nullptr){
		delete[]name;
		name = nullptr;
	}
	if (education != nullptr){
		delete[]education;
		education = nullptr;
	}
}
Instructor::Instructor(const Instructor& instructor){
	if (instructor.name == nullptr){
		name = nullptr;
	}
	else{
		int lenghtOfName = strlen(instructor.name);
		name = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			name[i] = instructor.name[i];
		}
		name[lenghtOfName] = '\0';
	}
	if (instructor.education == nullptr){
		education = nullptr;
	}
	else{
		int lenghtOfEducation = strlen(instructor.education);
		education = new char[lenghtOfEducation + 1];
		for (int i = 0; i < lenghtOfEducation; ++i){
			education[i] = instructor.name[i];
		}
		education[lenghtOfEducation] = '\0';
	}
}
Instructor& Instructor::operator=(const Instructor& instructor){
	if (instructor.name == nullptr){
		name = nullptr;
	}
	else{
		int lenghtOfName = strlen(instructor.name);
		name = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			name[i] = instructor.name[i];
		}
		name[lenghtOfName] = '\0';
	}
	if (instructor.education == nullptr){
		education = nullptr;
	}
	else{
		int lenghtOfEducation = strlen(instructor.education);
		education = new char[lenghtOfEducation + 1];
		for (int i = 0; i < lenghtOfEducation; ++i){
			education[i] = instructor.name[i];
		}
		education[lenghtOfEducation] = '\0';
	}
	return *this;
}

void Instructor::setName(char* _name){
	if (_name == nullptr){
		name = nullptr;
	}
	else{
		int lenghtOfName = strlen(_name);
		name = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			name[i] = _name[i];
		}
		name[lenghtOfName] = '\0';
	}
}
void Instructor::setEdcation(char* _education){
	if (_education == nullptr){
		education = nullptr;
	}
	else{
		int lenghtOfEducation = strlen(_education);
		education = new char[lenghtOfEducation + 1];
		for (int i = 0; i < lenghtOfEducation; ++i){
			education[i] = _education[i];
		}
		education[lenghtOfEducation] = '\0';
	}
}

char* Instructor::getName() const{
	if (name == nullptr){
		return nullptr;
	}
	else{
		int lenghtOfName = strlen(name);
		char* rName = new char[lenghtOfName + 1];
		for (int i = 0; i < lenghtOfName; ++i){
			rName[i] = name[i];
		}
		rName[lenghtOfName] = '\0';
		return rName;
	}
}
char* Instructor::getEducation() const{
	if (education == nullptr){
		return nullptr;
	}
	else{
		int lenghtOfEducation = strlen(education);
		char* rEducation = new char[lenghtOfEducation + 1];
		for (int i = 0; i < lenghtOfEducation; ++i){
			rEducation[i] = education[i];
		}
		rEducation[lenghtOfEducation] = '\0';
		return rEducation;
	}
}

void Instructor::display() const{
	if (name == nullptr){
		std::cout << "Name : nullptr" << std::endl;
	}
	else{
		std::cout << "Name : " << name << std::endl;
	}
	if (education == nullptr){
		std::cout << "Education : nullptr" << std::endl;
	}
	else{
		std::cout << "Education : " << education<< std::endl;
	}
}