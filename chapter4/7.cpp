#include <iostream>
#include <string>
using namespace std;

struct Pizza {
	string name;
	double len;
	double weight;
};
int main()
{
	Pizza p;
	cout << "Enter name: ";
	getline(cin, p.name);
	cout << "Enter length: ";
	cin >> p.len;
	cout << "Enter weight: ";
	cin >> p.weight;

	cout << "name: " << p.name << "\n";
	cout << "length: " << p.len << "\n";
	cout << "weight: " << p.weight << "\n";
	return 0;
}
