// Problem Description - https://www.geeksforgeeks.org/rearrange-array-arri/
// Solution - 

#include <bits/stdc++.h>

using namespace std; 

int main() {
	// naive approach 
	int arr[] { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int i{};
	for(i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == arr[j]) {
				swap(arr[i], arr[j]);
				break;
			}
		}
	}
	
	for(i = 0; i < n; i++) {
		if(i != arr[i]) {
			arr[i] = i;
		}
	}

	cout << "Rearranged Array using Naive Approach:  ";	
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	// efficient solution using swap - 
	int arr1[] { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
	int ele{};
	i = 0;	
	while (i < n) {
		ele = arr1[i];
		if (arr1[i] != -1 && arr1[i] != arr1[ele]) {
			swap(arr1[i], arr1[ele]);
		}
		else {
			i++;
		}
	}

	cout << "Rearranged Array using Efficient Approach:  ";	
	for(i = 0; i < n; i++)
		cout << arr1[i] << " ";
	cout << endl;
	
	return 0;

}
