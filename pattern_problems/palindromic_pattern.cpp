/*
 *Problem: Palindromic Pattern

 *Input: 5
 *Output:
		1
	      2 1 2
	    3 2 1 2 3
	  4 3 2 1 2 3 4
	5 4 3 2 1 2 3 4 5
 * */

#include<iostream>
using namespace std; 

int main(){
	int n; 

	cout << "Enter a number: ";
	cin >> n;

	cout << "Using Solution 1: " << endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i;j++){
			cout << "  ";
		}
		for(int j=i; j>=1; j--){
			cout << j << " ";
		}
		for(int j=1; j<=i-1; j++){
			cout << j+1 << " ";
		}
		for(int j=1; j<=2*n-1; j++){
			cout << " ";
		}
		cout << endl;
	}
	
	cout << "Using Solution 1: " << endl;
	for(int i=1; i<=n; i++){
		int j;
		int k=i;
		for(j=1; j<=n-i; j++){
			cout << "  ";
		}
		for(; j<=n; j++){
			cout << k << " ";
			k--;
		}
		k=1;
		for(; j<n+i; j++){
			k++;
			cout << k << " ";
		}
		for(; j<=2*n-1; j++){
			cout << "  ";
		}
		cout << endl;
	}
	return 0;
}
