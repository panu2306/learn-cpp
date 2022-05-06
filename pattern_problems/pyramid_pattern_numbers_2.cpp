/*
Problem: Print Pyramid Pattern for Numbers - 2

Input: 5
Output: 
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main(){
	int n;

	cout << "Enter a number: ";
	cin >> n;

	cout << "Using Solution 1: " << endl;
	for(int i=1; i<=n; i++){
		int count = 1; 
		for(int j=1; j<2*n; j++){
			if(n%2!=0){
				if(j<=n+i and j>=n-i and (i+j)%2==0){
					cout << count++;
				}else{
					cout << " ";
				}
			}
			if(n%2==0){
				if(j<=n+i and j>=n-i and (i+j)%2!=0){
					cout << count++;
				}else{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	
	cout << "Using Solution 2: " << endl;
	for(int i=1; i<=n; i++){
		int count = 1;
		for(int j=1; j<=n-i; j++){
			cout << " ";
		}
		for(int j=1; j<=i; j++){
			cout << count++ << " ";
		}
		cout << endl;
	}

	return 0;
}
