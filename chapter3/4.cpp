#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number of seconds:";
	long long seconds;
	cin >> seconds;
	cout << seconds << " seconds = ";

	int minutes, hours, days;
	minutes = seconds / 60;
	hours = minutes / 60;
	days = hours / 24;

	hours = hours % 24;
	minutes = minutes % 60;
	seconds = seconds % 60;
	cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds\n";
	return 0;
}
