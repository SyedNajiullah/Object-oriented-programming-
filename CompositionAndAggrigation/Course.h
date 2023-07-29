#pragma once
#include"Student.h"
#include"Instructor.h"
class Course
{
private:
	char* courseName;
	Instructor instructor;
	Student* student;
	int countStudent;
public:
	Course();
	Course(const Course& course);
	Course(char* _courseName, const Instructor& _instructor, const Student* _student, int _countStudent);
	Course& operator=(const Course& course);
	~Course();

	void setCourseName(char* _courseName);
	void setInstructor(const Instructor& _instructor);
	void setStudent(const Student*_student, int _countStudent);

	char* getCourseName() const;
	Instructor getInstructor() const;
	Student* getStudent() const;

	int getNumberOfStudents() const;

	void display() const;
};