#include "Student.h"
namespace HW1 {

	Student::Student()
	{
		studentName = "";
	}

	Student::Student(string studentN)
	{
		studentName = studentN;
	}

	Student::~Student()
	{
		courses.clear();

	}

	string Student::getName()
	{
		return studentName;
	}

	bool Student::addCourse(Course* C)
	{
		for (int i = 0; i < courses.size(); i++)
		{
			if (courses[i]->getName() == C->getName()) {
				cout << "Course:" << C->getName() << "Already Added!" << endl;
				return false;
			}
		}
		courses.push_back(C);
		cout << "Course" << C->getName() << "Added!" << endl;
		return true;

	}

	void Student::removedFromCourse(Course* C)
	{
		for (int i = 0; i < courses.size(); i++)
		{
			if (courses[i]->getName() == C->getName())
			{
				courses.erase(courses.begin() + i);
				cout << "Course:" << C->getName() << "Removed!" << endl;

			}
		}
	}
	ostream& operator<<(ostream& out, const Student& SName) {
		out << SName.studentName << endl;
		for (int i = 0; i < SName.courses.size(); i++)
		{
			out << SName.courses[i]->getName() << endl;

		}
		return out;
	}
	
}
