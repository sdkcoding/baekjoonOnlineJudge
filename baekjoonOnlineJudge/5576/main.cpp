#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int* scoreCount = new int[101]{ 0 };
	int num;
	int sum = 0;
	int n = 3;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &num);
			scoreCount[num]++;
		}
		for (int z = 100; z >= 0; z--) {
			while (scoreCount[z] && (n > 0)) {
				sum += z;
				scoreCount[z]--;
				n--;
			}
			if (n == 0) {
				n = 3;
				break;
			}
		}
		printf("%d ", sum);
		sum = 0;
	}
	printf("\n");
	return 0;
}