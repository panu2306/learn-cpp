// Check if given 2 strings are anagrams.

#include <bits/stdc++.h> 

using namespace std;

void sortFunction(string &s){
	const int char_max = 26;
	int hashArray[26] = {0};
	
	// assigning integer value to each character and incresing the value based on the number of same chars - 
	for(char c:s) hashArray[c-'a']++;

	s.erase();

	for(size_t i=0; i<char_max; i++){
		for(size_t j=0; j<hashArray[i]; j++){
			s.push_back((char('a' + i)));
		}
	}
}

int main(){
	string s1, s2;
	string s3, s4; 	

	//input two strings - 
	cout << "Enter first string: ";
	getline(cin, s1);	
	cout << "Enter second string: ";
	getline(cin, s2);	
	
	s3 = s1; 
	s4 = s2; 

	sortFunction(s3);
	sortFunction(s4);
	
	// compare using '=' operator - 
	if(s3 == s4){
		cout << "Strings are anagrams" << endl;
	}else{
		cout << "Strings are not anagrams" << endl;
	}

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	// using built in compare method to check sorted strings are anagrams or not - 
	int result = s1.compare(s2);
	if(result == 0){
		cout << "Strings are anagrams" << endl;
	}else{
		cout << "Strings are not anagrams" << endl;
	}

	return 0;
}
