/*
Question: Print a hollow rectangle - 

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

	cout << "Enter a number:";
	cin >> n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1 or i==n or j==1 or j==n){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
