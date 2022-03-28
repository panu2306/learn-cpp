#include <iostream>
using namespace std; 

int main(){
	// Static initialization of variables i.e. variables get stored in stack: 
	int number {25}; 
	int *num_ptr;

	num_ptr = &number;

	cout << "Number stored in stack: " << number << endl; 
	cout << "Address of number stored in stack: " << &number << endl; 
	cout << "Address number stored in stack using pointer variable: " << num_ptr << endl; 
	cout << "Number stored in stack using pointer variable: " << *num_ptr << endl; 
	
	// dynamic memory allocation to variable i.e. variables get stored in heap 
	int *p_number{nullptr};
	p_number = new int; // new int is allocated an int sixed memory in heap
	*p_number = 250; 

	cout << "p_number: " << p_number << " *p_number: " << *p_number << endl;
	delete p_number;
	//p_number = nullptr;
	*p_number = 20;
	cout << "p_number: " << p_number << " *p_number: " << *p_number << endl;
	/*
	delete doesn't change the value of the pointer (which is an address). It simply tells the memory management system that the bit of memory at
	that address, which was previously reserved, is no longer reserved, and is available for re-use.So, the vpoint variable will still exist,
	and it will still hold the same memory address as its value. But you can no longer use the memory at that address.
	It's not unusual to see code such as:
		delete myPtr;
		myPtr = nullptr;
	i.e. setting the value of the pointer to null, to indicate that it's no longer pointing to memory that can be used.
	*/
	//delete p_number; // don't use delete twice, program fails
	//p_number = nullptr;
	//cout << "p_number: " << p_number << " *p_number: " << *p_number << endl;

	return 0;
}
