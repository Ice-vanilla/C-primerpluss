#include <iostream>
using namespace std;
int main()
{
	int degrees, minutes, seconds;
	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees:";
	cin >> degrees;
	cout << "Next, enter the minutes of arc:";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc:";
	cin >> seconds;

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	double ans = degrees + (minutes + seconds / 60.0) / 60.0;
	cout << ans;
	cout << " degrees\n";
	return 0;
}
