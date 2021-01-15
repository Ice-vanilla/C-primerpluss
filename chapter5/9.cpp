#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	int cnt = 0;
	cout << "Enter words (to stop, type the word done):\n";
	while (true) {
		cin >> word;
		if (word == "done")
			break;
		++cnt;
	}
	cout << "You entered a total of " << cnt << " words.\n";
	return 0;
}
