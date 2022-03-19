#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//floor, ceil, absolute functions:
	float a = 50.60;
	cout << "The given value: " << a << endl;
	cout << "floor of given value: " << floor(a) << endl;
	cout << "ceil of given value: " << ceil(a) << endl;
	cout << "absolute of given value: " << abs(a) << endl;
	
	//Absolute function:
	int b {-5000};
	cout << "absoute of value " << b << ": "<< abs(b) << endl;

	//Exponent funtion:
	double exponential = exp(10);
	cout << "The given value: 10" << endl;
	cout << "exponent of given value: " << exponential << endl;
	
	//Power function:
	int c = 5;
	cout << "The given value: " << c << endl;
	cout << "power of given value: " << pow(c, 3) << endl;

	//Round function:
	float d = 5.6322;
	cout << "The rounded value of " << d << " is: " << round(d) << endl;
	return 0;
}
