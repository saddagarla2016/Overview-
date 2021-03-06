// Reviseminisoftware.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include <array> 
#include <vector>
#include <random>
#include <iomanip>
#include "Revise1.h"
#include "SingleLinkedList.h"
#include "Inheritance.h"
using namespace std;

int main()
{
	cout << "Calling from the Revise.h header file: " << endl << endl;
	printme();
	numplease();
	askme();
	vectorme();
	cout << endl;
	cout << "Calling from the Inheritance.h header file: " << endl;
	student student1;
	student1.name("popo");
	student1.grade('A');
	student1.studentnumber(343);
	student1.printit();
	cout << endl; 
	cout << "Calling from the SingleLinkedList.h header file: " << endl;
	linked op;
	op.insertanum(7);
	op.insertanum(78);
	op.insertanum(45);
	op.insertanum(364);
	op.display();
	op.deletenumfromfirst();
	op.display();
	op.deletenumfromlast();
	op.display();
	op.insertanum(7);
	op.insert_position(4, 6);
	op.display();

    return 0;
}

