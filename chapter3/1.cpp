#include <iostream>
using namespace std;
int main()
{
	int h;
	const int x = 12;
	cout << "input:_\b";
	cin >> h;
	cout << h / x << " " << h % x << "\n";
	return 0;
}
