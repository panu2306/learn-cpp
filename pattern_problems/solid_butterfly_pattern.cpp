/*
Problem: Print Solid Butterfly Pattern

Input: 5
Output:
*       *
**     **
***   ***
**** ****
*********
*********
**** ****
***   ***
**     **
*       *

*/

#include<iostream>
using namespace std; 

int main(){
	int n; 
	
	cout << "Enter a number: ";
	cin >> n;
	
	cout << "Using Solution 1: " << endl;
	for(int i=1; i<=n; i++){
		int j;
		for(j=1; j<=i; j++){
			cout << "*";
		}
		for(; j<2*n-i; j++){
			cout << " ";
		}
		for(; j<2*n; j++){
			cout << "*";
		}
		cout << endl;
	}

	for(int i=n; i>=1; i--){
		int j;
		for(j=1; j<=i; j++){
			cout << "*";
		}
		for(; j<2*n-i; j++){
			cout << " ";
		}
		for(; j<2*n; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << "Using Solution 2:" << endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<2*n; j++){
			if(j<=i or j>=2*n-i){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
	for(int i=n; i>=1; i--){
		for(int j=1; j<2*n; j++){
			if(j<=i or j>=2*n-i){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
