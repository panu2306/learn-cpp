// Problem_4. Compare 2 strings.  (using character array & character pointers. Dont use Library functions)

#include <bits/stdc++.h>

using namespace std; 

bool compare(string &s1, string &s2){
	int size;
	s1.length() > s2.length() ? size=s1.length() : size=s2.length();
	for(size_t i=0; i<size; i++){
		if(s1[i] != s2[i]){
			return false;
		}
	}
	return true;
}

int main(){
	string s1, s2;

	// taking two strings as an input - 
	cout << "Enter first string: ";
	getline(cin, s1);
	
	cout << "Enter second string: ";
	getline(cin, s2);
	
	// given strings - 
	cout << "Given two strings: " << s1 << " & " << s2 << endl;
	
	// compare using char by char compare 
	compare(s1, s2) ? cout << "Both strings are same" << endl : cout << "Both strings are different" << endl;
	
	// compare using relational operator - 
	if(s1 == s2){
		cout << "Strings are same" << endl;
	}else{
		cout << "Strings are different" << endl;
	}

	// compare using built-in compare method - 
	int result = s1.compare(s2); // returns integer and based on value of integer returned the result is decided as below - 
	
	if(result == 0){
		cout << "Strings are same" << endl;
	}else if(result > 0){
		cout << "String " << s1 << " is greater than " << s2 << endl;
	}else{
		cout << "String " << s2 << " is greater than " << s1 << endl;
	}

	return 0; 
}
