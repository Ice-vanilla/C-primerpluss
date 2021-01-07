#include <iostream>
using namespace std;
void printmice();
void run();
int main()
{
	printmice();
	printmice();
	run();
	run();
	return 0;
}
void printmice()
{
	cout << "Three blind mice\n";
}
void run()
{
	cout << "See how they run\n";
}
