/*Problem: Print Hollow Diamond using Stars
 *
 *Input: 5
 *Output: 
	    *
	   * *
	  *   *
	 *     *
	*       *
	*       *
	 *     *
	  *   *
	   * *
	    *
*/

#include<iostream>
using namespace std; 

int main(){
	int n; 

	cout << "Enter a number: ";
	cin >> n;

	cout << "Using Solution 1: " << endl;
	for(int i=1; i<=n; i++){
		int j;
		for(j=1; j<=n-i; j++){
			cout << " ";
		}
		for(; j<=n-i+1; j++){
			cout << "*";
		}
		for(; j<n+i-1; j++){
			cout << " ";
		}
		for(; j<=n+i-1; j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i=n; i>=1; i--){
		int j;
		for(j=1; j<=n-i; j++){
			cout << " ";
		}
		for(; j<=n-i+1; j++){
			cout << "*";
		}
		for(; j<n+i-1; j++){
			cout << " ";
		}
		for(; j<=n+i-1; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << "Using Solution 2: " << endl;
	for(int i=1; i<=2*n; i++){
		for(int j=1; j<2*n; j++){
			if(j==n-i+1 or j==n+i-1 or i+j==n*3 or j==i-n){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
