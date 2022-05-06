/*
Question: Print a solid rectangle -  

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

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
