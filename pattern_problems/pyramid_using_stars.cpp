/*
 *Problem: Print Diamond using Stars : Given n, print diamond with 2*n rows. 
 * 
 *Input: 5
 *Output:

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
 
 */

#include<iostream>
using namespace std;

int main(){
	int n; 

	cout << "Enter a number: ";
	cin >> n;

	for(int i=1; i<=n; i++){
		int j;
		for(j=1; j<=n-i; j++){
			cout << "  ";
		}
		for(; j<n+i; j++){
			cout << "* ";
		}
		for(; j<2*n; j++){
			cout << "  ";	
		}
		cout << endl;
	}
	for(int i=n; i>=1; i--){
		int j;
		for(j=1; j<=n-i; j++){
			cout << "  ";
		}
		for(; j<n+i; j++){
			cout << "* ";
		}
	
		cout << endl;
	}

	return 0;
}
