#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long n;
	cin >> n;

	int * numList = new int[10]{ 0 };
	
	while (n > 0) {
		numList[n % 10]++;
		n /= 10;
	}
	
	long long num = 0;
	int count = 0;
	for (int i = 9; i >= 0; i--) {
		count = numList[i];
		while (count--) {
			num *= 10;
			num += i;
		}
	}
	delete[] numList;
	cout << num << '\n';
	return 0;
}