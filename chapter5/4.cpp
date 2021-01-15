#include <iostream>
using namespace std;
int main()
{
	double daphne = 100, cleo = 100;
	int year = 0;
	while (daphne >= cleo) {
		++year;
		daphne += 10;
		cleo += cleo * 0.05;
	}
	cout << year << " year\n";
	cout << "Daphne: " << daphne - 100 << "\n";
	cout << "Cleo: " << cleo - 100 << "\n";
	return 0;
}
