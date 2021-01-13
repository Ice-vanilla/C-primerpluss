#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
	string band;
	double weight;
	int cal;
	CandyBar(string str, double w, int c) : band(str), weight(w), cal(c) {}
};

int main()
{
	CandyBar snack("Mocha Munch", 2.3, 250);
	cout << "band: " << snack.band << "\n";
	cout << "weight: " << snack.weight << "\n";
	cout << "cal: " << snack.cal << "\n";
	return 0;
}
