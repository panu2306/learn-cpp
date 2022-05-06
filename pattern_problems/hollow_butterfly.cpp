/*
Problem: Print Hollow Butterfly Pattern

Input: 5
Output: 
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *

*/

#include<iostream>
using namespace std; 

int main(){
	int n; 

	cout << "Enter a number: ";
	cin >> n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=2*n; j++){
			if(j==1 or j==2*n or j==i or j==2*n-i+1){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}

	for(int i=n; i>=1; i--){
		for(int j=1; j<=2*n; j++){
			if(j==1 or j==2*n or j==i or j==2*n-i+1){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
