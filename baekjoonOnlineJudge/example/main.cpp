// string::size
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string a;
	string b;
	char c;

	cin >> a;
	cin >> c;
	cin >> b;

	cout << "The size of str is " << a << " " << c << " " << b << " bytes.\n";
	cout << a.length() - b.length() << '\n';
	return 0;
}