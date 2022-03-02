#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "student.h"
#include "course.h"
#include "grade.h"

using namespace std;

int main()
{
	// declare variables
	int sumStudent = 0; // total of students that gonna submitted, to limit the loops
	int sumCourse = 0; // total of courses that gonna submitted, to limit the loops
	string studentName = ""; // store string of student names temporarily
	string courseName = ""; // store string of course names temporarily
	int temp = 0; // store integer of score temporarily
	int i = 0; // iterator for outer loops
	int j = 0; // iterator for inner loops
	int k = 0; // store sum of individual score 
	double average = 0.0; // store average of individual score

	// ask for how much students
	cout << "Simple Grading System with C++\n\n\n" << endl; // I want this cout every sistem("cls");
	cout << "Enter number of students enrolled: " << endl;
	cin >> sumStudent;
	system("cls");

	// ask for how much courses
	cout << "Enter number of courses available: " << endl;
	cin >> sumCourse;
	system("cls");

	// input for individual name
	student s;
	for (i; i < sumStudent; i++) {
		cout << "Enter student name: " << endl;
		getline(cin >> ws, studentName);
		s.studentVec.push_back(studentName);
		system("cls");
	}

	i = i * 0; // reset the iterator

	// input course names
	course c;
	for (i; i < sumCourse; i++) {
		cout << "Enter course name: " << endl;
		getline(cin >> ws, courseName);
		c.courseVec.push_back(courseName);
		system("cls");
	}

	i = i * 0;

	// input student grades
	grade g;
	for (i; i < sumStudent; i++) {
		cout << "Name: ";
		cout << s.studentVec[i] << endl;
		vector<int> row;
		for (j; j < sumCourse; j++) {
			cout << "\nCourse: ";
			cout << c.courseVec[j];
			cout << "\nGrade: ";
			cin >> temp;
			row.push_back(temp);
		}
		g.gradeVec.push_back(row);
		system("cls");
		j = j * 0;
	}

	i = i * 0;

	// output report
	cout << "--------------------------  REPORT  --------------------------\n\n";
	for (i; i < sumStudent; i++) {
		cout << "Name:";
		cout << s.studentVec[i] << endl;
		vector<int> row;
		for (j; j < sumCourse; j++) {
			cout << "\nCourse: ";
			cout << c.courseVec[j];
			cout << "\nGrade: ";
			cout << g.gradeVec[i][j];
			k = k + g.gradeVec[i][j];
		}
		average = static_cast<double>(k) / j;
		cout << "\nAverage: ";
		cout << average << endl;
		j = j * 0;
		k = k * 0;
		cout << "\n-------------------\n" << endl;
	}
	
	return 0;
}
