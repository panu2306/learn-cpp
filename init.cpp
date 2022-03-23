// In this program we are going to see different ways to initialize variables in C++
#include <iostream> 
using namespace std;

int main(){
	//first way - using curly braces:
	int a {5};
	//second way - using assignment operator 
	int b = 10; 
	// third way - using functional initialization
	int c(15);
	
	int sum = a +b + c;

	cout << sum << endl;
	return 0;
}
