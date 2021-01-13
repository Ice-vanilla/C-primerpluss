#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstname, lastname;
	char grade;
	int age;

	cout << "What is your first name? ";
	getline(cin, firstname);
	cout << "What is your last name? ";
	cin >> lastname;
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << lastname << ", " << firstname << "\n";
	cout << "Grade: " << (char)(grade + 1) << "\n";
	cout << "Age: " << age;
	return 0;
}
