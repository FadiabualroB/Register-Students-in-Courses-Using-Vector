#include "Course.h"
namespace HW1 {
	Course::Course()
	{
		courseName = "";
	}

	Course::Course(string courseN)
	{
		courseName = courseN;
	}

	Course::~Course()
	{
		students.clear();
	}

	string Course::getName()
	{
		return courseName;
	}

	void Course::addStudent(Student* s)
	{
		students.push_back(s); // It push the elements into a vector from the back

	}

	void Course::removeStudentsFromCourse()
	{
		students.clear();
	}
	ostream& operator<<(ostream& out, const Course& CName)
	{
			out << CName.courseName;
			for (int i = 0; i < CName.students.size(); i++)
			{
				out << CName.students[i]->getName() << endl;

			}
			return out;
	}
}
