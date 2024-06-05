#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	if (s1 == s2)	cout << "二者相等" << endl;
	else if (s1 > s2)	cout << s1 << endl;
	else	cout << s2 << endl;

	return 0;

}
