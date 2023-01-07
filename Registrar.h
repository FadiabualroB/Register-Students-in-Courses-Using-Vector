#pragma once
#include<vector>
#include"Course.h"
#include"Student.h"
namespace HW1 {
	class Course;
	class Student;
	class Registrar {
	private:
		//A vector<Course*> courses;
		vector<Course*> courses;
		//A vector<Student*> students;
		vector<Student*> students;
		//An integer function findStudent(studentName); that returns the index of student if found in the vector students, else return -1
		int findStudent(string SName);
		//An integer function findCourse(courseName) ; that return the index of course if found in the vector courses, else return -1
		int findCourse(string CName);

	public:
		// default constructor Registrar
		Registrar();
		//that creates a new course and adds it to the courses vector.
		bool addCourse(string CName);
		//that creates a new student and adds it to the students vector.
		bool addStudent(string SName);
		//this function should check if both course and student are foundand then assign the course to that student, else the operation fails.
		bool enrollStudentInCourse(string SName, string CName);
		//this function should check if the course is foundand then remove all students from that course.
		bool cancelCourse(string CName);
		//clears both courses and students vectors to prepare for the next semester.
		void clear();
		friend ostream& operator<<(ostream& out, const Registrar& reg);
		

	};
}
