#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <random>
#include <iomanip>
using namespace std;
 //example of inheritance
class file {
public:
	void name(string e) {
		nameofstudent = e;
	}
	void studentnumber(int o) {
		num = o;
	}
	void grade(char studentgrade) {
		grades = studentgrade;
	}
	
protected:
	char grades;
	int num;
	string nameofstudent;
private:
	int trymeme;
	 
};

class student : public file {
public:
	void printit() {
		cout << "The name of the student is: " << nameofstudent << endl;
		cout << "The student ID number is: " << num << endl;
		cout << "The student grade is: " << grades << endl;
		
		
	}
};
