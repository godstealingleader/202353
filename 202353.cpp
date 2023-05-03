//5.9  9

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string user_in;
	int times = 0;
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> user_in;
	while (user_in!="done")
	{
		times++;
		cin >> user_in;
	}
	cout << "You entered a total of " << times << " words.";
}