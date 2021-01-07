#include <iostream>
using namespace std;
double func(double val);
int main()
{
	cout << "Please enter a Celsius value: ";
	double val;
	cin >> val;
	cout << val << " degrees Celsius is " << func(val) << " degrees Fahrenheit.";
	return 0;
}
double func(double val) {
	return 1.8 * val + 32.0;
}
