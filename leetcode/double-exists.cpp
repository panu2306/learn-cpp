/*
Check If N and Its Double Exist
Given an array arr of integers, check if there exist two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
 

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: For i = 0 and j = 2, arr[i] == 10 == 2 * 5 == 2 * arr[j]
Example 2:

Input: arr = [3,1,7,11]
Output: false
Explanation: There is no i and j that satisfy the conditions.
 

Constraints:

2 <= arr.length <= 500
-103 <= arr[i] <= 103
*/

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> v, int ele){
	int start = 0;
	int end = v.size();
	int mid;

	while(end > start){
		mid = (start + end) / 2;
		
		if(ele == v[mid]){
			return true;
		}else if(ele > v[mid]){
			start = mid + 1; 
		}else{
			end = mid - 1;
		}
	}
	return false;
}

//USING SIMPLE SEARCH - 
bool doubleExists(vector<int>& v){
	int size = v.size();

	for(int i=0; i<size; i++){
			for(int j=i+1; j<size; j++){
				if((v[i] == 2*v[j] or v[j] == 2*v[i]) and i != j){
					cout << v[i]/2 << " " << v[i] << " " << v[j] << " " << i << " " << j<< endl;
					return true;
				}
			}
		}
	return false;
}

int main(){
	vector<int> v;
	int num;

	while(cin >> num){
		v.push_back(num);
	}

	/*
	//CALLING SIMPLE SEARCH to check double exists - 
	if(doubleExists(v)){
		cout << "Double of element exists!" << endl;
	}else{
		cout << "Double of element doesn't exists!" << endl;
	}
	*/
	
	// Using binarySearch to find if double exists - 
	sort(v.begin(), v.end());
	int flag = 0; 
	for(int i=0; i<v.size(); i++) {
		if(binarySearch(v, 2*v[i]) and v[i] != 2*v[i]) {
			flag = 1;
		}
	}
	if(flag) {
		cout << "Double of element exist!" << endl;
	}else{
		cout << "Double of element doesn't exist!" << endl;
	}

	
	return 0;
}
