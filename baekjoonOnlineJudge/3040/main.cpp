#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int sum = 0;
	int len = 9;
	int* numList = new int[len]{ 0 };
	for (int i = 0; i < len; i++) {
		scanf("%d", &numList[i]);
		sum += numList[i];
	}
	
	int idx1 = 0, idx2 = 0;
	bool flag = false;
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (sum - (numList[i] + numList[j]) == 100) {
				idx1 = i; idx2 = j; flag = true;
				break;
			}
		}
		if (flag) {
			break;
		}
	}
	
	for (int i = 0; i < len; i++) {
		if ((idx1 != i) && (idx2 != i)) {
			printf("%d\n", numList[i]);
		}
	}
	
	delete[] numList;
	return 0;
}