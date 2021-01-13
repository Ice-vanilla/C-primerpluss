#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
	string band;
	double weight;
	int cal;
	CandyBar(const char *str, double w, int c) : band(str), weight(w), cal(c) {}
	CandyBar() {}
};

int main()
{
	CandyBar *snack = new CandyBar[3];
	for (int i = 0; i < 3; ++i)
	{
		snack[i].band = "Mocha Munch";
		snack[i].weight = 2.3;
		snack[i].cal = 250;
	};
	for (int i = 0; i < 3; ++i) {
		cout << "band: " << snack[i].band << "\n";
		cout << "weight: " << snack[i].weight << "\n";
		cout << "cal: " << snack[i].cal << "\n";
	}
	delete []snack;
	return 0;
}
