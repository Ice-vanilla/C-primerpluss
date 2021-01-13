#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<double, 3> arr;
	double ans = 0;
	for (int i = 0; i < 3; ++i) {
		cout << "Enter " << i + 1 << ": ";
		cin >> arr[i];
		ans += arr[i];
	}
	cout << "3 times, avg: " << ans / 3 << "\n";
	return 0;
}
