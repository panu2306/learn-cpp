/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
 

Constraints:
1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
*/

#include <bits/stdc++.h>

using namespace std; 

void swap(int& a, int& b){
	a = a + b;
	b = a - b;
	a = a - b;
}

class Solution{
	public:
		int moveZeros(vector<int>& arr){
			int size = arr.size();
			int left_index = 0;

			for(int i = 0; i < size; i++){
				if(arr[i] != 0){
					swap(arr[left_index], arr[i]);
					left_index++;
				}
			}

			return left_index-1;	
		}
};

int main(){
	Solution s;
	vector<int> v = {0, 1, 0, 3, 12};

	int n_zeros_moved = s.moveZeros(v);

	cout << "Number of zeros moved: " << n_zeros_moved << endl;

	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	return 0;
}
