#include"Course.h"
int main(){
	
	Student* student = new Student[3];

	student[0].setName("Ali");
	student[0].setRegistrationNumber("L1F1YBSCS1ABC");
	student[0].setCity("Lahore");

	student[1].setName("Ahmad");
	student[1].setRegistrationNumber("L1F1YBSCS2ABC");
	student[1].setCity("Islamabad");

	student[2].setName("Ammar");
	student[2].setRegistrationNumber("L1F1YBSCS3ABC");
	student[2].setCity("Lahore");

	Instructor instructor;

	instructor.setName("Syed Najiullah");
	instructor.setEdcation("MSSE");

	Course* course = new Course;
	
	course->setCourseName("Object Oriented Programming");
	course->setInstructor(instructor);
	course->setStudent(student, 3);


	course->display();

	delete[] student;
	student = nullptr;

	delete course;
	course = nullptr;
	return 0;
}