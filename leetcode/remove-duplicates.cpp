

#include <bits/stdc++.h>
using namespace std; 

class Solution{
	public: 
		int removeDuplicates(vector<int>& arr){
			int count = 0;
			int unique = 0;
			for(int i = 0; i < arr.size(); i++){
				if(i == 0 || arr[i] != arr[i-1]){
					arr[i-count] = arr[i];
					unique++;
				}else{
					count++;
				}
			}
			//arr.erase(arr.begin()+unique, arr.end());
			return unique;
		}
};
int main(){
	Solution s;
	vector<int> v = {1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6};
	
	int elements_size = s.removeDuplicates(v);
	cout << "Number of elements after removing duplicates: " << elements_size << endl;
	
	for(int i=0; i < elements_size; i++) cout << v[i] << " ";
	cout << endl;

	return 0;
}
