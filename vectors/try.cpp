#include <bits/stdc++.h>

using namespace std; 
class Solution {
public:
    void findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        int i = 0; 
        int count = 0;
	int mainCounter = 0;
	
	for(int i=0; i<size; i++){
		
	}
	cout << count << endl;
    }
};
int main(){
	Solution s;
	vector<int> num = {1,1,0,1,1,1};
	int size = num.size();
	int count = 0;
	//cout << "size: " << size << endl;
	s.findMaxConsecutiveOnes(num);
	for(int i=0; i<size; i++){
		if(num[i] == 1){
			int j = i+1;
			while(num[j]==1){
				cout << num[i] << " " << num[j] << endl;
				//cout << j << endl;
				count += 1;
				j++;
				i++;	
			}
		}
	}
	
	cout << count << endl;
	
	return 0;
}
