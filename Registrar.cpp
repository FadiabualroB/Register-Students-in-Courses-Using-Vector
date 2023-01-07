#include "Registrar.h"
#include"Course.h"
#include"Student.h"
namespace HW1 {

	int Registrar::findStudent(string SName)
	{
		for (int i = 0; i < students.size(); i++)
		{
			if (students[i]->getName() == SName)
			{
				
				return i;
			}
		}
		cout <<"Student Not found!" << endl;
		return -1;
	}

	int Registrar::findCourse(string CName)
	{
		for (int i = 0; i < courses.size(); i++)
		{
			if (courses[i]->getName() == CName)
			{
				return i;

			}
		}
		cout << "Course Not Found!" << endl;
		return -1;

	}

	Registrar::Registrar()
	{

	}

	bool Registrar::addCourse(string CName)
	{
		for (int i = 0; i < courses.size(); i++)
		{
			if (courses[i]->getName() == CName) {
				cout <<courses[i]->getName() << "Course already Added!" << endl;
				return false;
			}
		}
		courses.push_back(new Course(CName));
		cout << "Course Added Successfully!" << endl;
		return true;
	}

	bool Registrar::addStudent(string SName)
	{
		for (int i = 0; i < students.size(); i++)
		{
			if (students[i]->getName() == SName)
			{
				cout << "Student Already Added!" << endl;
				return false;
			}
		}
		students.push_back(new Student(SName));
		cout << "Student" << SName << "Added!" << endl;
		return true;

	}

	bool Registrar::enrollStudentInCourse(string SName, string CName)
	{
		int SIndex = findStudent(SName);
		int CIndex = findCourse(CName);
		if (SIndex==-1||CIndex==-1)
		{
			return false;
			cout << "Course / Student Name not found!" << endl;

		}
		students[SIndex]->addCourse(courses[CIndex]);
		courses[CIndex]->addStudent(students[SIndex]);
		return true;

	}

	bool Registrar::cancelCourse(string CName)
	{
		int CIndex = findCourse(CName);
		if (CIndex == -1)
		{
			return false;

		}
		courses[CIndex]->removeStudentsFromCourse();
		courses.erase(courses.begin() + CIndex);
		cout << "All Students removed from:" << courses[CIndex]->getName() << endl;
		return true;
			
	}

	void Registrar::clear()
	{
		courses.clear();
		students.clear();
	}
	ostream& operator<<(ostream& out, const Registrar& reg)
	{
		for (int i = 0; i < reg.courses.size(); i++)
		{
			out << *reg.courses[i] << endl;

		}
		for (int i = 0; i < reg.students.size(); i++)
		{
			out << *reg.students[i] << endl;

		}

		return out;

	}
	
}




