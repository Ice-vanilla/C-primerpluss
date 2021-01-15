#include <iostream>
#include <string>
using namespace std;
int main()
{
	string month[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
	int number[3][12], sum[3] = {0}, res = 0;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << month[j] << ": ";
			cin >> number[i][j];
			sum[i] += number[i][j];
		}
		cout << sum[i] << "\n";
		res += sum[i];
	}
	cout << res << "\n";
	return 0;
}
