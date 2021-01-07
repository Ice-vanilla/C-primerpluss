#include <iostream>
using namespace std;
double func(double year);
int main()
{
	cout << "Enter the number of light years: ";
	double year;
	cin >> year;
	cout << year << " light years = " << func(year) << " astronomical units\n";
	return 0;
}
double func(double year) {
	return year * 63240;
}
