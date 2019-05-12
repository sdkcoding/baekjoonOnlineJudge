#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int k;
	scanf("%d", &k);

	int p, m, dp, dm = 0;
	bool* mList;
	for (int i = 0; i < k; i++) {
		scanf("%d %d", &p, &m);
		mList = new bool[m] {false};
		for (int j = 0; j < p; j++) {
			scanf("%d", &dp);
			if (mList[dp - 1]) {
				dm++;
			}
			else {
				mList[dp - 1] = true;
			}
		}
		delete[] mList;
		printf("%d\n", dm);
		dm = 0;
	}
	return 0;
}