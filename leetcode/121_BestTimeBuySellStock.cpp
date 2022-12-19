#include <bits/stdc++.h>

using namespace std; 

class Solution {
	public:
	       //Brute Force Approach - 	
	/*	int maxProfit(vector<int>& prices) {
			//int l_pointer = 0;
			//int r_pointer = prices.size() - 1;
			int maxProfit{};
			int currDiff{};
			for(int i = 0; i < prices.size(); i++) {
				for(int j = i+1; j < prices.size(); j++) {
					if(prices[i] < prices[j]) {
						currDiff = prices[j] - prices[i];
						maxProfit = max(maxProfit, currDiff);
					}
				}
			}
			return maxProfit;
		}
	*/
		int maxProfit(vector<int>& prices) {
			int minPrice = *max_element(prices.begin(), prices.end());
			int maxProfit{};
			for(size_t i = 0; i < prices.size(); i++) {
				if(prices[i] < minPrice) {
					minPrice = prices[i];
				}else if(prices[i] - minPrice > maxProfit) {
					maxProfit = prices[i] - minPrice;
				}
			}
			return maxProfit;
		}
};

int main() {
	Solution s;
	vector<int> v = {7,1,5,3,6,4};
	cout << "Maximum Profit: " << s.maxProfit(v) << endl; 
}
