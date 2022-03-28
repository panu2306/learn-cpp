// This program will illustrate the case where \"new\" operator may get failed due to some unexpected value. 
// To mitigate this problem there are two solutions: 
// 1. give warning to user using try...catch block
// 2. use nothrow while declaring new operator
#include <iostream>
using namespace std;

int main(){
	//int var1 {new int{1000000000000000000000000}}; // this will throw an error because of int out of range

	//solution 1:
	try{
		for(size_t i = 0; i < 10; i++){
			int *var2 = new int[10000000000000000000];
		}
	}catch(exception& e){
		cout << "Exception: " << e.what() << endl;
	}

	// solution 2:
	int *var3 {new(nothrow) int{1000000000000000000}};
	cout << "program ended correctly" << endl;

	return 0;
}
