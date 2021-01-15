#include <iostream>
#include <string>
using namespace std;
int main()
{
	string month[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
	int number[12], sum = 0;
	for (int i = 0; i < 12; ++i) {
		cout << month[i] << ": ";
		cin >> number[i];
		sum += number[i];
	}
	cout << sum << "\n";
	return 0;
}
