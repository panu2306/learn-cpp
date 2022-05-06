/*

Problem: Print Hollow Rhombus 
 
Input: 5

Output: 
    *****
   *   *
  *   *
 *   *
*****

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
			if((i==1 && j>=n) or (i==n && j<=n) or j==n-i+1 or j==2*n-i){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
	
	cout << "Using Solution 2: " << endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout << " ";
		}
		for(int j=1; j<=n; j++){
			if(i==1 or i==n){
				cout << "*";
			}else{
				if(j==1 or j==n){
					cout << "*";
				}else{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
