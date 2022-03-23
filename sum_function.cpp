#include <iostream>
using namespace std;

int sum(int firstNumber, int secondNumber){
	int sum = firstNumber + secondNumber;
	return sum;
}

int main(int argc, char* argv[]){
	int firstNum = 10;
	int secondNum = 20; 

	int sum0 = firstNum + secondNum;

	int sum1 = sum(firstNum, secondNum);
	int sum2 = sum(12, 13);

	cout << "Sum 0: " << sum0 << "\nSum 1: "<< sum1 << "\nSum 2: "<< sum2 << endl;
}
