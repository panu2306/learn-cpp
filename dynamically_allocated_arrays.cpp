#include <iostream>
using namespace std; 

int main(){
	const size_t size{5};
	int *array = new int[size]; // we can also use: int *array {new int[size]};

	// input elements to array:
	cout << "Enter an array: " << endl; 
	for(size_t i = 0; i < size; i++){
		cin >> *(array + i); 
	}
	// printing elements of array:
	cout << "array entered: " << endl;
	for(size_t i = 0; i < size; i++){
		cout << *(array + i) << endl; 
	}
	return 0;
}
