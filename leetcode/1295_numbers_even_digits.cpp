#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int countEven{};
        for(int ele : nums) {
                if(int(log10(ele)+1)%2 == 0) {
                        countEven++;
                }
        }
        return countEven;
    }
};


int main() {
	Solution s; 
	vector<int> nums{12, 345, 2, 6, 7896};
	cout << s.findNumbers(nums) << endl;
}
