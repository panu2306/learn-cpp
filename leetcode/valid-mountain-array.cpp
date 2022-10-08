/*
Valid Mountain Array - 
Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

- arr.length >= 3
- There exists some i with 0 < i < arr.length - 1 such that:
	- arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
	- arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Example 1:
Input: arr = [2,1]
Output: false

Example 2:
Input: arr = [3,5,5]
Output: false

Example 3:
Input: arr = [0,3,2,1]
Output: true
 
Constraints:
 - 1 <= arr.length <= 104
 - 0 <= arr[i] <= 104
*/

#include <bits/stdc++.h>
using namespace std; 

bool validMountainArray(vector<int>& arr){
	int size = arr.size();
	
	if(size < 3){
		return false;
	}else if(arr[0] > arr[1] or arr[size-2] < arr[size-1]){
		return false;
	}else{
		int high_index;
		int i = 0;
		int flag = 0;

		while(i < size-1){
			if(arr[i] == arr[i+1]){
				return false;
			}else if(arr[i] > arr[i+1]){
					flag = 1;
					high_index = i;
					for(int i = high_index; i<size-1; i++){
						if(arr[i] < arr[i+1]){
							return false;
						}
					}
			}
			i++;
		}
		if(flag==0){
			return false;
		}else{
			return true;
		}
	
	}
	
}

int main(){
	vector<int> v = {9,8,7,6,5,4,3,2,1,0};
	int size = v.size();
	
/*	if(size < 3){
		cout << "No mountain" << endl;
	}else{
		int flag = 1; 
		int high_index;
		for(int i=0; i<size-1; i++){
			if(v[i] == v[j+1]){
				return false;
			}else if(v[i] > v[i+1]){
				high_index = i;
				for(int j = high_index; j<size-1; j++){
					if(v[j] < v[j+1] and v[j] == v[j+1]){
						flag = 0;
					}
				}
			}
		}
		if(flag == 1){
			cout << "Mountain" << endl;
		}else{
			cout << "No Mountain" << endl;
		}
	}
*/
	validMountainArray(v) ? cout << "True" << endl : cout << "False" << endl;

	return 0;
}
