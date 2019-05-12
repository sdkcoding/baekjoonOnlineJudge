#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int k;
	scanf("%d", &k);

	int num;
	int count = 0;
	int* moneyList = new int[k];
	for (int i = 0; i < k; i++) {
		scanf("%d", &num);
		if (!num) {
			moneyList[--count] = 0;
		}
		else {
			moneyList[count++] = num;
		}
	}
	long long sum = 0;
	for (int i = 0; i < count; i++) {
		sum += moneyList[i];
	}
	printf("%lld\n", sum);
	delete[] moneyList;
	
	return 0;
}