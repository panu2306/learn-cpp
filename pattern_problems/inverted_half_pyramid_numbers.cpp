/*
 *Problem: Print Inverted Half Pyramid using numbers

 *Input: 9
 *Output:
	1 2 3 4 5 6 7 8 9
	1 2 3 4 5 6 7 8
	1 2 3 4 5 6 7
	1 2 3 4 5 6
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1
 * */

#include<iostream>
using namespace std; 

int main(){
	int n; 

	cout << "Enter a number: ";
	cin >> n;
	
	cout << "Using Solution 1:\n";
	for(int i=n; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
	
	cout << "Using Solution 2:\n";
	for(int i=1; i<=n; i++){
		for(int j=n; j>=i; j--){
			cout << n-j+1 << " ";
		}
		cout << endl;
	}
}
