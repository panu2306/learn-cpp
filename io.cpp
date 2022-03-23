#include <iostream> 
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	int a;
	string name;
	string full_name;

	cout << "Enter your Name: ";
	cin >> name;
	cout << "Enter your Full Name: ";
	cin.ignore();
	getline(cin, full_name);
	cout << "Enter your Age: ";
	cin >> a;

	cout << "Name: " << name << "\nFull Name: " << full_name << "\nAge: " << a << endl;

	return 0;
}
