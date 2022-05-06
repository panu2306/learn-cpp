/*
Problem: Print Pyramid Pattern for Numbers

Input: 5
Output: 
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/

#include<iostream>
using namespace std;

int main(){
	int n;

	cout << "Enter a number: ";
	cin >> n;

	cout << "Using Solution 1: " << endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<2*n; j++){
			if(n%2!=0){
				if(j<=n+i and j>=n-i and (i+j)%2==0){
					cout << i;
				}else{
					cout << " ";
				}
			}else{
				if(j<=n+i and j>=n-i and (i+j)%2!=0){
					cout << i;
				}else{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	
	cout << "Using Solution 2: " << endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout << " ";
		}
		for(int j=1; j<=i; j++){
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}
