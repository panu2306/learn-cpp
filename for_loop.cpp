#include <iostream>
#include <string>
using namespace std;

int main(){
	string s = "Hello C++";
	int size = 10; 
	size_t i{0};
	//size_t - unsigned integer whose size changes according compiler (16bit, 32bit etc.)
	for(i; i < size; ++i){
		cout << s << " " << i+1 << " times." << endl;
	}
	
	for(i = 0; i < s.length(); i++){
		cout << s[i] << endl;
	}
	return 0;
}
