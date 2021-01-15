#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "enter two number: ";
	cin >> a >> b;
	int sum = 0;
	while (a <= b) {
		sum += a++;
	}
	cout << "sum: " << sum << "\n";
	return 0;
}
