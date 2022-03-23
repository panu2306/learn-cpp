#include <iostream>
using namespace std;

int main(){
	size_t size;
	cout << "Enter size of array: ";
	cin >> size;
	const size_t COUNT{size};
	int scores[COUNT];

	//reading array:
	cout << "Enter Elements of an array: " << endl;
	for(size_t i{0}; i < COUNT; i++){
		cin >> scores[i];
	}

	//displaying the array: 
	cout << "Entered Array Elements: " << endl;
	for(size_t i{0}; i<COUNT; i++){
		cout << scores[i] << " ";
	}

	cout << endl;

	//printing using range for loop:
	for(auto value: scores){
		cout << value << " ";
	}
	
	cout << endl;

	//size of array: 
	int array[] {1, 2, 3, 4, 5, 6, 7};
	int num_ele = sizeof(array)/sizeof(array[0]);

	cout << "Number of elements in given array: " << num_ele << endl;

	//character array:
	char message[] {'H', 'e', 'l', 'l', 'o', '\0'};
	cout << "Message: " << message << endl;

}
