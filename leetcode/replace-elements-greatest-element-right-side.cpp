/*
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.

Example 1:
Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
Explanation:
- index 0 --> the greatest element to the right of index 0 is index 1 (18).
- index 1 --> the greatest element to the right of index 1 is index 4 (6).
- index 2 --> the greatest element to the right of index 2 is index 4 (6).
- index 3 --> the greatest element to the right of index 3 is index 4 (6).
- index 4 --> the greatest element to the right of index 4 is index 5 (1).
- index 5 --> there are no elements to the right of index 5, so we put -1.


Example 2:
Input: arr = [400]
Output: [-1]
Explanation: There are no elements to the right of index 0.

Constraints:
1 <= arr.length <= 104
1 <= arr[i] <= 105
*/

#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    vector<int> replaceElementsNaiveSolution(vector<int>& arr) {
	    int size = arr.size();
	    int max;

	    for(size_t i = 0; i < size-1; i++){
		    max = arr[i+1];
		    for(size_t j = i+2; j < size; j++){
			    if(arr[j] > max){
				    max = arr[j];
			    }
		    }
		    arr[i] = max;
	    }
	    arr[size-1] = -1;
	    return arr;
    }

    vector<int> replaceElementsEfficientSolution(vector<int>& arr){
	    int size = arr.size();
	    int max = -1; 

	    for(int i = size-1; i >= 0; i--){
	    	int temp = arr[i];
		arr[i] = max; 

		if(temp > max){
			max = temp;
		}
	    }

	    return arr;
    }
};

int main(){
	Solution s;
	vector<int> v = {17,18,5,4,6,1};

 	v = s.replaceElementsEfficientSolution(v);
	//v = s.replaceElementsNaiveSolution(v);
	
	for(size_t i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	return 0;
}
