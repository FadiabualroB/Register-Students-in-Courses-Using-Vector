
#include<iostream>
#include"Course.h"
#include"Student.h"
#include"Registrar.h"
#include<vector>

using namespace std;
using namespace HW1;
int main() {
	Registrar registrar;
	cout << "No courses or students added yet\n";
	cout << registrar << endl;
	cout << "AddCourse DS10636211\n";
	registrar.addCourse("DS10636211");
	cout << registrar << endl;
	cout << "AddStudent Ali_Ahmad\n";
	registrar.addStudent("Ali_Ahmad");
	cout << registrar << endl;
	cout << "AddCourse Java10636212\n";
	registrar.addCourse("Java10636212");
	cout << registrar << endl;
	cout << "EnrollStudentInCourse Ali_Ahmad DS10636211\n";
	registrar.enrollStudentInCourse("Ali_Ahmad", "DS10636211");
	cout << "EnrollStudentInCourse Ali_Ahmad Java10636212\n";
	registrar.enrollStudentInCourse("Ali_Ahmad", "Java10636212");
	cout << registrar << endl;
	cout << "EnrollStudentInCourse Haya_Samaana DS10636211\n";
	cout << "Should fail since Haya_Samaana is not a student.\n";
	registrar.enrollStudentInCourse("Haya_Samaana", "DS10636211");
	cout << registrar << endl;
	cout << "CancelCourse DS10636211\n";
	registrar.cancelCourse("DS10636211");
	cout << registrar << endl;
	cout << "Clear system to start new semester\n";
	registrar.clear();
	cout << registrar << endl;
	return 0;
}