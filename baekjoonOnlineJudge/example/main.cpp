// string::size
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string dish;
	int i, length, height = 10;

	cin >> dish;

	length = dish.size();

	for (i = 1; i < length; i++) {
		if (dish[i - 1] == dish[i])
			height += 5;
		else if (dish[i - 1] != dish[i])
			height += 10;
	}
	cout << height << "-" << '\n';
	return 0;
}