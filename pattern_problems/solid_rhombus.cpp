/*
Problem: Print Solid Rhombus

Input: 5
Output: 
    *****
   *****
  *****
 *****
*****
*/

#include<iostream>
using namespace std;

int main(){
	int n;

	cout << "Enter a number: ";
	cin >> n;
	
	cout << "Using Solution 1:" << endl;
	for(int i=n; i>=1; i--){
		int j;
		for(j=1; j<=i-1; j++){
			cout << " ";
		}
		for(j=1; j<=n; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << "Using Solution 2:" << endl;
	for(int i=n; i>=1; i--){
		for(int j=1; j<2*n-(n-i); j++){
			if(j<=i-1){
				cout << " ";
			}else{
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
