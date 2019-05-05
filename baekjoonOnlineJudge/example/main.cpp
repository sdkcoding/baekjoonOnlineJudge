#include <iostream>
#include <string>

using namespace std;


int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string n;
	cin >> n;
	int num = n.at(0) - '0';
	cout << num << '\n';
	

	return 0;
}