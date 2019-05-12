#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int k;
	scanf("%d", &k);

	int n;
	int* scoreCount = new int[101]{ 0 };
	int* scoreList;
	int score;
	int len;
	int gap = 0;
	for (int i = 0; i < k; i++) {
		scanf("%d", &n);
		scoreList = new int[n] {0};
		for (int j = 0; j < n; j++) {
			scanf("%d", &score);
			scoreCount[score]++;
		}
		len = n - 1;
		for (int z = 0; z < 101; z++) {
			while (scoreCount[z]) {
				scoreList[len--] = z;
				scoreCount[z]--;
			}
		}
		for (int s = 0; s < n - 1; s++) {
			if (scoreList[s] - scoreList[s + 1] > gap) {
				gap = scoreList[s] - scoreList[s + 1];
			}
		}
		printf("Class %d\n", i + 1);
		printf("Max %d, ", scoreList[0]);
		printf("Min %d, ", scoreList[n - 1]);
		printf("Largest gap %d\n", gap);
		delete[] scoreList;
		gap = 0;
	}
	
	delete[] scoreCount;
	return 0;
}