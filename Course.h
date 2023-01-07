#pragma once
#include<vector>
#include<string>
#include"Student.h"
#include<iostream>
using namespace std;
namespace HW1 {
	class Student;
	class Course {
	private:
		//course name with the initial value
		string courseName;
		//Template by using Vector in C++ STL(standard template library)
		vector<Student*> students;

	public:
		// Default constructor
		Course();
		//A user defined constructor that takes the name of course as a parameter.
		Course(string courseN);
		//A destructor to clear the memory.
		~Course();
		//function that returns the name of course.
		string getName();
		//that adds any given Student to the vector of students.
		void addStudent(Student* s);
		//Function removes all students from the course.
		void removeStudentsFromCourse();
		//Overload the insertion operator <<.This operator should print the contents of the object
		friend ostream& operator<<(ostream& out, const Course& CName);
		
	};
}
