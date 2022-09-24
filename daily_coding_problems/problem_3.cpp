// Problem_3) Sort given string.  (using character array & character pointers. Dont use Library functions)

#include <bits/stdc++.h>

using namespace std; 

void swap(char &a, char &b){
	char temp;
	temp = a; 
	a = b;
	b = temp;
}

int main(){
	string s; 
	
	// input a string : 
	getline(cin, s);
	string s1 = s;
	string s2 = s;
	
	// sorting string using bubble sort : 
	cout << "String before sorting using bubble sort: " << s << endl;
	
	for(size_t i=0; i<s.length(); i++){
		for(size_t j=i+1; j<s.length(); j++){
			if(int(tolower(s[i])) > int(tolower(s[j]))){
				swap(s[i], s[j]);
			}	
		}
	}

	cout << "Sorted string using bubble sort : " << s << endl;

	// sorting string using library function : 
	cout << "String before sorting using library function: " << s1 << endl;
	sort(s1.begin(), s1.end());
	cout << "Sorted string using library function : " << s1 << endl;
	
	// sorting string using hash array :  
	const int MAX_CHARS = 26; // 26 being no of chars in english alphabets
	int hashArray[MAX_CHARS] = {0};
	cout << "String before sorting using hashed array: " << s2 << endl;
	for(char c: s2) hashArray[c - 'a']++;
	
	// erase current string 
	s2.erase();
	
	for(size_t i=0; i<MAX_CHARS; i++){
		for(size_t j=0; j<hashArray[i]; j++){
			s2.push_back(char('a' + i));		
		}
	}
	
	cout << "Sorted string using hash array : " << s2 << endl;

	return 0; 
}
