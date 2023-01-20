/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Constraints:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.
*/

#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
	    // intuitive approch - 
	    int size = nums.size();
	    vector<int> sorted_vec(size);
	    int left{};
	    int right{size-1};

	    while(left <= right) {
		int result{};
	    	if(abs(nums[left]) > abs(nums[right])) {
			result = nums[left] * nums[left];
			left++;
		}
		else {
			result = nums[right] * nums[right];
			right--;
		}
		sorted_vec[size-1] = result;
		size--;
	    }
	    
	    return sorted_vec;
	    // General Approach - 
		/*
		for(auto& n : nums){
		   n *= n;
		}
		sort(nums.begin(), nums.end());
		return nums;
		*/
	
    }

};

int main(){
	vector<int> nums = {-4,-1,0,3,10};
	Solution s;

	cout << "Sorted vector in increasing order: ";
	for(auto ele:s.sortedSquares(nums)) cout << ele << " ";
	cout << endl;
	

	return 0;
}
