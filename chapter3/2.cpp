#include <iostream>
using namespace std;
int main()
{
	const int x = 12;
	const double h = 0.0254;
	const double w = 2.2;

	double h1, h2, weight;
	cout << "英尺: ";
	cin >> h1;
	cout << "英寸: ";
	cin >> h2;
	cout << "体重: ";
	cin >> weight;
	
	double tmp = (h1 * x + h2) * h;
	cout << weight / w / (tmp * tmp) << "\n";
	return 0;
}

