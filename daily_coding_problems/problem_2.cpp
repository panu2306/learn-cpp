// Problem_2. Reverse given string. (using character array & character pointers. Dont use Library functions)

#include <bits/stdc++.h>

using namespace std; 

void swap(char *a, char *b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	string s;
	int start;
	int end;
	//input a string - 
	getline(cin, s);

	//reverse a string using swap - 
	start = 0;
	end = size(s) - 1;
	while(start < end){
		swap(s[start], s[end]);
		start++;
		end--;
	}

	// displaying reversed string - 
	cout << "Reversed string - " << s << endl;
	
	// using lib functions - 
	reverse(s.begin(), s.end()); 
	cout << "Reversed string using library function - " << s << endl;
	
	// using string constructor and another variable - 
	string s1 = string(s.rbegin(), s.rend());
	cout << "Reversed string using string constructor - " << s1 << endl;
	
	return 0;
}
