#include <iostream>
using namespace std; 

int main(){
	int num1 {15};
	
	//declaring reference to num1:
	int& num2 {num1};

	cout << "Number 1 (actual variable): " << num1 << endl;
	cout << "Number 2 (using reference variable): " << num2 << endl;
	cout << "Adress of num1: " << &num1 << endl;
	cout << "Adress of num2: " << &num2 << endl; // results same address, hence proves reference is just an alias in c++

	// modification of original num1 or vice-versa and which will result in modification of reference or vice-versa
	num1 = 100;
	cout << "Number 1 (actual variable): " << num1 << endl;
	cout << "Number 2 (using reference variable): " << num2 << endl;
 
	// const references: 
	int num3 = 200;
	const int& num4{num3};
	cout << "Number 3 (actual variable): " << num3 << endl;
	cout << "Number 4 (using reference variable): " << num4 << endl;
	//num4 += 100; // -> gives out error, const reference can't be modified
	cout << "Number 3 (actual variable): " << num3 << endl;
	cout << "Number 4 (using reference variable): " << num4 << endl;

	return 0;
}
