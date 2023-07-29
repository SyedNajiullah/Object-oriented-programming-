#include "Course.h"

Course::Course(){
	courseName = nullptr;
	student = nullptr;
	countStudent = 0;
}
Course::Course(const Course& course){
	if (course.courseName == nullptr){
		courseName = nullptr;
	}
	else{
		int length = strlen(course.courseName);
		courseName = new char[length + 1];
		for (int i = 0; i < length; ++i){
			courseName[i] = course.courseName[i];
		}
		courseName[length] = '\0';
	}
	instructor = course.instructor;
	if (course.student == nullptr){
		student = nullptr;
	}
	else{
		student = new Student[course.countStudent];
		for (int i = 0; i < course.countStudent; i++){
			student[i] = course.student[i];
		}
	}
	countStudent = course.countStudent;
}
Course::Course(char* _courseName, const Instructor& _instructor, const Student* _student, int _countStudent){
	if (_courseName == nullptr){
		courseName = nullptr;
	}
	else{
		int length = strlen(_courseName);
		courseName = new char[length + 1];
		for (int i = 0; i < length; ++i){
			courseName[i] = _courseName[i];
		}
		courseName[length] = '\0';
	}
	instructor = _instructor;
	if (_student == nullptr){
		student = nullptr;
	}
	else{
		student = new Student[countStudent];
		for (int i = 0; i < countStudent; i++){
			student[i] = _student[i];
		}
	}
	countStudent = _countStudent;
}
Course& Course::operator=(const Course& course){
	if (course.courseName == nullptr){
		courseName = nullptr;
	}
	else{
		int length = strlen(course.courseName);
		courseName = new char[length + 1];
		for (int i = 0; i < length; ++i){
			courseName[i] = course.courseName[i];
		}
		courseName[length] = '\0';
	}
	instructor = course.instructor;
	if (course.student == nullptr){
		student = nullptr;
	}
	else{
		student = new Student[course.countStudent];
		for (int i = 0; i < course.countStudent; i++){
			student[i] = course.student[i];
		}
	}
	countStudent = course.countStudent;
	return *this;
}
Course::~Course(){
	if (courseName != nullptr){
		delete[]courseName;
		courseName = nullptr;
	}
	if (student != nullptr){
		delete[]student;
		student = nullptr;
	}
}

void Course::setCourseName(char* _courseName){
	if (_courseName == nullptr){
		courseName = nullptr;
	}
	else{
		int length = strlen(_courseName);
		courseName = new char[length + 1];
		for (int i = 0; i < length; ++i){
			courseName[i] = _courseName[i];
		}
		courseName[length] = '\0';
	}
}
void Course::setInstructor(const Instructor& _instructor){
	instructor = _instructor;
}
void Course::setStudent(const Student*_student, int _countStudent){
	if (_student == nullptr){
		student = nullptr;
	}
	else{
		countStudent = _countStudent;
		student = new Student[countStudent];
		for (int i = 0; i < countStudent; i++){
			student[i] = _student[i];
		}
	}
}

char* Course::getCourseName() const{
	if (courseName == nullptr){
		return nullptr;
	}
	else{
		int length = strlen(courseName);
		char* rCourseName = new char[length + 1];
		for (int i = 0; i < length; ++i){
			rCourseName[i] = courseName[i];
		}
		rCourseName[length] = '\0';
		return rCourseName;
	}
}
Instructor Course::getInstructor() const{
	return instructor;
}
Student* Course::getStudent() const{
	if (student == nullptr){
		return nullptr;
	}
	else{
		Student* rStudent = new Student[countStudent];
		for (int i = 0; i < countStudent; i++){
			rStudent[i] = student[i];
		}
		return rStudent;
	}
}

int Course::getNumberOfStudents() const{
	return countStudent;
}

void Course::display() const{
	std::cout << "::::::::::::" << std::endl;
	std::cout << ":: COURSE ::" << std::endl;
	std::cout << "::::::::::::" << std::endl;
	if (courseName == nullptr){
		std::cout << "Course Name : nullptr" << std::endl;
	}
	else{
		std::cout << "Course Name : " << courseName << std::endl;
	}
	std::cout << "::::::::::::::::" << std::endl;
	std::cout << ":: Instructor ::" << std::endl;
	std::cout << "::::::::::::::::" << std::endl;
	instructor.display();
	std::cout << " : Total students : " << countStudent << std::endl;
	if (student == nullptr){
		std::cout << "Students : nullptr" << std::endl;
	}
	else{
		std::cout << ":::::::::::::" << std::endl;
		std::cout << ":: Student ::" << std::endl;
		std::cout << ":::::::::::::" << std::endl;
		for (int i = 0; i < countStudent; ++i){
			student[i].display();
		}
	}
}