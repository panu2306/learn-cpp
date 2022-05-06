/*
Question: Print Half-Pyramid after 180 degree rotation - 

Input: 5
Output: 
	 *
	**
       ***
      ****
     *****
*/

#include<iostream>
using namespace std; 

int main(){
	int n; 

	cout << "Enter a number: ";
	cin >> n;

	cout << "Using Solution 1: \n";
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=n-i){
				cout << " ";
			}else{
				cout << "*";
			}
		}
		cout << endl;
	}
	cout << "Using Solution 2: \n";
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout << " ";
		}
		for(int j=1; j<=i; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
