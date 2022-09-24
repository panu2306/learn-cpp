// Problem_1. Display string length.  (using character array & character pointers. Dont use Library functions)

#include <bits/stdc++.h>

using namespace std; 

int main(){
	string s; 
	int length = 0;
	
	//input a string - 
	getline(cin, s);

	// First way to count number of characters in a string - 
	for(char c:s){
		if(c==' '){
			continue;
		}
		length++;
	}

	// displaying length of string - 
	cout << "The length of string \"" << s << "\" is: " << length << endl;

	// First way to count number of characters in a string - 
	length = 0;
	int blank = 0;

	while(s[length] != '\0'){
		if(s[length] == ' '){
			blank++;
		}
		length++;
	}
	
	// displaying length of string - 
	cout << "The length of string \"" << s << "\" is: " << length-blank << endl;

	return 0;
}
