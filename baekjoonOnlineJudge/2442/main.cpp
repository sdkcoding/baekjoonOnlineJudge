#define EXP01	0;
#define EXP02	1;
#if EXP01
#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n-1) - i; j++) {
			cout << ' ';
		}
		for (int z = 0; z < (2 * i) + 1; z++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}
#endif
#if EXP02
#include <stdio.h>
int main()
{
	int n, i, j, k = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n - k / 2; j++)
			printf(" ");
		for (j = 0; j < k; j++)
			printf("*");
		printf("\n");
		k += 2;
	};
}
#endif
