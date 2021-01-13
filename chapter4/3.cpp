#include <iostream>
#include <cstring>

#define LEN 20
using namespace std;
int main()
{
	char firstname[LEN], lastname[LEN], str[43];
	
	cout << "Enter your first name: ";
	cin.getline(firstname, LEN);
	cout << "Enter your last name: ";
	cin.getline(lastname, LEN);
	cout << "Here's the information in a single string: ";
	strcpy(str, lastname);
	strcat(str, ", ");
	strcat(str, firstname);
	cout << str << "\n";
	return 0;
}
