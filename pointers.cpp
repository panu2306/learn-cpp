#include <iostream>
using namespace std;

int main(){
	int a = 10; 
	int* p;
	p = &a;
	cout << a << " " << p << " " << *p << endl;

	// to define pointer to string in c++, we need to have a const char defined otherwise compiler throws an error. 
	// In below program the *message pointer will reference to first char of string i.e. H and message will store whole string.
	const char *message {"Hello World"};
	cout << "Message: " << *message << " " << message << endl;
	return 0;
}
