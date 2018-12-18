#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <random>
#include <exception>
#include <iomanip>
using namespace std;

//Function for printing the string, reversing it, and printing the reverse of the string 
void printme() {
	string po;
	cout << "What is the word you want to reverse: " << endl;
	cin >> po;
	cout << po << endl;
	reverse(po.begin(), po.end());
	cout << "The reverse of the word is: " << po << endl;

}
//Function that return type int and is asking the user the number and what the user grade is 
int numplease() {
	int op;
	cout << "what is the number?: " << endl;
	cin >> op;
	if (op > 90 && op <= 100) {
		cout << "You get " << op << " and an A" << endl;
	}
	else if (op > 80 && op <= 90) {
		cout << "You get " << op << " and a B" << endl;
	}
	else {
		cout << "You get " << op << " and a C" << endl;
	}
	return op;
}
//Asking the user in a while loop what is the number 
void askme() {
	int i = 1;
	int user;
	while (i == 1) {
		if (i == 0) {
			cout << "Good - Bye" << endl;
			break;
		}
		
		if (i == 1) {
			cout << "What is the number? " << endl;
			cin >> user;
			cout << "The number is " << user << endl;
			cout << "Do you want to ask another number?(0 to exit, 1 to continue) " << endl;
			cin >> i;
		}
		if (i != 0 && i != 1) {
			cout << "Not valid input" << endl;
			cout << "Do you want to ask another number?(0 to exit, 1 to continue) " << endl;
			cin >> i;
		}
	}
}
//Asking the user what are the numbers in the vector of size of 3
void vectorme() {
	vector<int> opop(3);
	int number;
	cout << "What are the numbers you want to put into a vector: " << endl;
	for (int ie = 0; ie < opop.size(); ie++) {
		cin >> opop.at(ie);
	}
	cout << "The numbers are " << endl;
	sort(opop.begin(), opop.end());

	for (int po = 0; po < opop.size(); po++) {
		cout << opop.at(po) << endl;
	}
	cout << "What number do you want to take out? " << endl;
	cin >> number;
	for (int po = 0; po < opop.size(); po++) {
		if (opop.at(po) == number) {
			opop.at(po) = 0;
		}
	}
	for (int po = 0; po < opop.size(); po++) {
		cout << opop.at(po) << endl;
	}
	
}
//This is a class
class class1 {
public:
	void printme() {
		cout << po << "is getting from private" << endl;
	}
	string pop() {
		string o;
		cin >> o;
		cout << "The word is " << o << endl;
		return o;
	}
	void address() {
		
		cout << "The address of 9 is " << &po << endl;
		cout << "The address of *pp is " << &pp << endl;
		cout << "The number is getting directly from po:" << po << endl;
		cout << "The number is getting indirectly from po:" << *pp << endl;
	}
private:
	int po = 9;
	int *pp = &po;
};
//class for using friend 
class friendme {
	int ip = 33;
	friend class meme;
    public:
		void printdirectly(){
			cout << ip << endl;
		} 
};
class meme {
public:
	void printindir() {
		friendme ii;
		cout << ii.ip << endl;
	}
};







