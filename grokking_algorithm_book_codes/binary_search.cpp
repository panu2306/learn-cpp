#include <iostream>
using namespace std; 

int binary_search(int a[], int n, int low, int high);
int binary_search_using_function_recursion(int n, int low, int high, int array[]);

int main(){
	int n;
	cout << "Enter a number to search from list: ";
	cin >> n;
	int a[] = {1,2,3,4,5,6, 7};
	int low = 0;
	int high = sizeof(a)/sizeof(int);

	binary_search(a, n, low, high);
	binary_search_using_function_recursion(n, low, high, a);
	
	return 0;
}

int binary_search(int a[], int n, int low, int high){
	while(low <= high){
		int mid = (low + high)/2; 
		int guess = a[mid];
		if(guess == n){
			cout << "The given number " << n << " is at position " << mid << endl;
			break;
		}
		else if(n < guess){
			high = mid -1;
		}
		else if(n > guess){
			low = mid + 1;
		}
	}
	if(low > high){
		cout << "The given number is not present in the array" << endl;
	}
	return 0;
}

int binary_search_using_function_recursion(int n, int low, int high, int a[]){
	if(low > high){
		cout << "The given number is not present in the array" << endl;
		return 0;
	}else{
		int mid = (low + high)/2;
		int guess = a[mid];
		if(n > guess){
			return binary_search_using_function_recursion(n, mid+1, high, a); 
		}else if(n < guess){
			return binary_search_using_function_recursion(n, low, mid-1, a); 
		}
		else{
			cout << "The given number " << n << " is at position " << mid << endl;
			return 0;
		}
	}
}
