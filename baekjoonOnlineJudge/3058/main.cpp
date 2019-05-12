#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	int num;
	int min = 100;
	int sum = 0;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 7; j++) {
			scanf("%d", &num);
			if (num % 2 == 0) {
				sum += num;
				if (num < min) {
					min = num;
				}
			}
		}
		printf("%d %d\n", sum, min);
		sum = 0; min = 100;
	}

	return 0;
}