/*
Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
 
Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything. 

Example 1:
Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

Example 2:
Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]

Constraints:
1 <= arr.length <= 104
0 <= arr[i] <= 9
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
	int size = arr.size();
	int length = size - 1; 
	int countZeros = 0; 

	for(size_t i=0; i <= length - countZeros; i++){
		if(arr[i]==0) {
			if(i == length - countZeros) {
				arr[length] = 0;
				length -= 1;
				break;
			}
			countZeros += 1;
		}
	}

	int end = length - countZeros; 
	
	for(size_t i = end; i > 0; i--){
		if(arr[i]==0){
			arr[i+countZeros] = 0;
			countZeros--;
			arr[i+countZeros] = 0;
		}else{
			arr[i+countZeros] = arr[i];
		}
	} 
    }
};

int main(){
	vector<int> arr {1, 0, 2, 3, 0, 1};
	Solution s;

	s.duplicateZeros(arr);
	for(auto num: arr) cout << num << " ";
	cout << endl;

	return 0;
}
