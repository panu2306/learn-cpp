/*
 *Problem: Print Half Pyramid using numbers - 2 - 
 *
 *Input: 5 
 *Output:
	1 1 1 1 1
	2 2 2 2
	3 3 3
	4 4
	5
 * */

#include<iostream>
using namespace std;

int main(){
	int n; 

	cout << "Enter a number: ";
	cin >> n;

	for(int i=n; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout << n-i+1 << " ";
		}
		cout << endl;
	}
	return 0;
}
