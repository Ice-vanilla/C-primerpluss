#include <iostream>
using namespace std;
int main()
{
	long long world, us;
	cout << "Enter the world's population:";
	cin >> world;
	cout << "Enter the population of the US:";
	cin >> us;
	cout << "The population of the US is ";
	cout << (double)us / world * 100;
	cout << "% of the world population\n";
	return 0;
}
