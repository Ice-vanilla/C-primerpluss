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
	CandyBar snack[3] = {
		{"Mocha Munch", 2.3, 250},
		{"Mocha Munch", 2.3, 250},
		{"Mocha Munch", 2.3, 250}
	};
	for (int i = 0; i < 3; ++i) {
		cout << "band: " << snack[i].band << "\n";
		cout << "weight: " << snack[i].weight << "\n";
		cout << "cal: " << snack[i].cal << "\n";
	}
	return 0;
}
