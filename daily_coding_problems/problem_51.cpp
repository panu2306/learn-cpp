/*
Problem 51) To find out the second largest element of an unsorted array.
*/

#include <bits/stdc++.h>
using namespace std; 

int findSecondLargest(vector<int>& v){
	int size = v.size();

	// find largest first - 
	int largest = v[0]; 
	for(int i=1; i<size; i++){
		if(v[i] > largest){
			largest = v[i];
		}
	}

	// find second largest - 
	int secondLargest = 0;
	for(int i=0; i<size; i++){
		if(v[i] > secondLargest && v[i] < largest){
			secondLargest = v[i]; 
		}
	}

	return secondLargest;
}

int main(){
	vector<int> v;
	int num;

	cout << "Enter elements in array: ";
	while(cin >> num){
		v.push_back(num);
	}

	cout << "Second Largest Element in the array: " << findSecondLargest(v) << endl;

	return 0; 
}
