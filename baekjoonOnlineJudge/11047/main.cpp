#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int* coin = new int[n] {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}

	int count = 0;
	for (int j = n - 1; j >= 0; j--) {
		if ((k / coin[j]) > 0) {
			count += k / coin[j];
			k %= coin[j];
		}
		if (k == 0) {
			break;
		}
	}
	
	printf("%d\n", count);
	delete[] coin;

	return 0;
}