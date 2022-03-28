/*
Dangling Pointers: pointer that doesn't point to valid address
Three kinds of dangling pointer: 
	1. Uninitialized Pointer
	2. Deleted Pointer
	3. Multiple pointers pointing to same memory
To remove the issue of danglign pointers: 
	1. initialize your pointer
	2. reset pointer after deletion
	3. For multiple pointers to same address, make sure owner pointer is very clear
*/

#include <iostream> 
using namespace std;

int main(){
	// case 1 - Uninitialized pointer: 
	int *p_number;

	//cout << "Value at p_number: " << *p_number << " Value of p_number: " << p_number << endl; // gives out segmentation error
	
	// case 2 - deleted pointer:
	int *p_number1{new int{23}};
	
	cout << "Value at p_number1: " << *p_number1 << " Value of p_number1: " << p_number1 << endl;

	delete p_number1;

	//cout << "Value at p_number1: " << *p_number1 << " Value of p_number1: " << p_number1 << endl; // gives out segmentation error
	
	// Case 3 - Multiple pointers pointing to same address: 
	int *p_number2{new int{25}};
	int *p_number3 {p_number2};

	// printing when p_number2 is not null yet: 
	cout << "Value at p_number2: " << *p_number2 << " Address of p_number2: " << p_number2 << endl;
	cout << "Value at p_number2 using p_number3: " << *p_number3 << " Address of p_number3: " << p_number3 << endl; 
	delete p_number2;
	cout << "Value at p_number2 after delete: " << *p_number2 << " Address of p_number2 after delete: " << p_number2 << endl;
	cout << "Value at p_number2 using p_number3 after delete: " << *p_number3 << " Address of p_number3 after delete: " << p_number3 << endl; 
	
	//cout << "Value at p_number3: " << *p_number3 << " Value of p_number3: " << p_number3 << endl; 
	return 0;
}
