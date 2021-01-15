#include <iostream>
#include <cstring>
using namespace std;
const int Size = 40;
int main()
{
	char word[Size];
	int cnt = 0;
	cout << "Enter words (to stop, type the word done):\n";
	while (true) {
		cin >> word;
		if (!strcmp(word, "done"))
			break;
		++cnt;
	}
	cout << "You entered a total of " << cnt << " words.\n";
	return 0;
}
