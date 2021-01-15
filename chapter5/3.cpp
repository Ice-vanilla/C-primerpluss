#include <iostream>
using namespace std;
int main()
{
	double sum = 0, a;
	while (true) {
		cout << "enter a number(0 to quit): ";
		cin >> a;
		if (a == 0.0)
			break;
		sum += a;
		cout << "now the sum: " << sum << "\n";
	}
	cout << "quit\n";
	return 0;
}
