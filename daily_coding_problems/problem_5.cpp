// Check if given string is palindrome 

#include <bits/stdc++.h> 

using namespace std; 

void swap(char &a, char &b){
	char temp = a; 
	a = b;
	b = temp;
}

bool checkPalindrome(string s){
	string s1 = s; 
	int start = 0; 
	int end = s.length()-1;
	
	while(start < end){
		swap(s[start], s[end]);
		start++;
		end--;
	}
	return s==s1;
}

int main(){
	string s; 

	// input a string - 
	getline(cin, s);

	// calling function to check string is palindrome - 
	checkPalindrome(s) ? cout << "String is palindrome" << endl : cout << "String is not palindrome" << endl; 
	
	return 0; 
}
