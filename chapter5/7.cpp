#include <iostream>
#include <string>

using namespace std;

struct car {
	string make;
	int year;
};
int main()
{
	int cnt, i = 1;
	cout << "How many cars do you with to catalog? ";
	cin >> cnt;
	cin.get();
	car *c = new car[cnt];
	while (cnt--) {
		cout << "Car #" << i++ << ":\n";
		cout << "Please enter the make: ";
		getline(cin, c[i - 2].make);
		cout << "Please enter the year made: ";
		cin >> c[i - 2].year;
		cin.get();
	}
	cout << "Here is your collection:\n";
	cnt = 0;
	while (--i) {
		cout << c[cnt].year << " " << c[cnt++].make << "\n";
	}

	return 0;
}
