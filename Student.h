#pragma once
#include<vector>
#include"Course.h"
#include<string>
using namespace std;
namespace HW1 {
	class Course;
	class Student {
	private:
		//student name with the initial value
		string studentName;
		//vector<Course*> courses
		vector<Course*> courses;
	public:
		// default constructor
		Student();
		//A user defined constructor that takes the name of the student as a parameter
		Student(string studentN);
		//A destructor to clear the memory.
		~Student();
		//Function that returns the name of the student
		string getName();
		//Function adds any given course to the vector of courses
		bool addCourse(Course* C);
		//Function removes a student from a given course.
		void removedFromCourse(Course* C);
		//Overload the insertion operator <<. This operator should print the contents of the object.
		friend ostream& operator<<(ostream& out, const Student& SName);
		
	};
}