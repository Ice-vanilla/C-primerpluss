#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstname, lastname, str;
	cout << "Enter your first name: ";
	cin >> firstname;
	cout << "Enter your last name: ";
	cin >> lastname;
	str = lastname + ", " + firstname;
	cout << "Here's the information in a single string: " << str << "\n";
	return 0;
}
