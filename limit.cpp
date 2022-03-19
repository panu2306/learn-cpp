#include <iostream>
#include <limits>
using namespace std;

int main(){
	cout << "Minimum size of bool: " << numeric_limits<bool>::min() << endl;
	cout << "Maximum size of bool: " << numeric_limits<bool>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of char: " << +numeric_limits<char>::min() << endl;
	cout << "Maximum size of char: " << +numeric_limits<char>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of unsigned char: " << +numeric_limits<unsigned char>::min() << endl;
	cout << "Maximum size of unsigned char: " << +numeric_limits<unsigned char>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of signed short int: " << numeric_limits<short>::min() << endl;
	cout << "Maximum size of signed short int: " << numeric_limits<short>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of short unsigned int: " << numeric_limits<short unsigned>::min() << endl;
	cout << "Maximum size of short unsigned int: " << numeric_limits<short unsigned>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of unsigned int: " << numeric_limits<unsigned int>::min() << endl;
	cout << "Maximum size of unsigned int: " << numeric_limits<unsigned int>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of signed int: " << numeric_limits<int>::min() << endl;
	cout << "Maximum size of signed int: " << numeric_limits<int>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of long int: " << numeric_limits<long int>::min() << endl;
	cout << "Maximum size of long int: " << numeric_limits<long int>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of long long int: " << numeric_limits<long long int>::min() << endl;
	cout << "Maximum size of long long int: " << numeric_limits<long long int>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of float: " << numeric_limits<float>::min() << endl;
	cout << "Maximum size of float: " << numeric_limits<float>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of double: " << numeric_limits<double>::min() << endl;
	cout << "Maximum size of double: " << numeric_limits<double>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of long double: " << numeric_limits<long double>::min() << endl;
	cout << "Maximum size of long double: " << numeric_limits<long double>::max() << endl;
	cout << "**********************************************************************************" << endl;
	cout << "Minimum size of long double: " << numeric_limits<long double>::min() << endl;
	cout << "Maximum size of long double: " << numeric_limits<long double>::max() << endl;
	return 0;
}
