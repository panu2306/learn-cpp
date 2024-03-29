/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2
 
Constraints:
1 <= nums.length <= 105
nums[i] is either 0 or 1.
*/

#include <bits/stdc++.h>
using namespace std; 

class Solution {
	public:
		int findMaxConsecutiveOnes(vector<int>& nums) {
			int size = nums.size();
			int count = 0;
			int mainCount = 0;

			for(int i=0; i<size; i++){
				if(nums[i]==1){
					count += 1;
				}else{
					mainCount = max(mainCount, count);
					count = 0;
				}
			}

			return max(mainCount, count);
		}
};

int main(){
	vector<int> nums;
	Solution s;
	
	// take an input vector of ints - 
	int num;
	while(cin >> num){
		nums.push_back(num);
	}
	cout << s.findMaxConsecutiveOnes(nums) << endl;

	return 0;
}
