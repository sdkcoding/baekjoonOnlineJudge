#include <iostream>
#include <cstdio>

using namespace std;
typedef struct {
	int x;
	int y;
}POINT;

int main()
{
	int n;
	int x, y;
	POINT temp;
	scanf("%d", &n);
	POINT* pList = (POINT*)malloc(sizeof(POINT) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		pList[i].x = x;	pList[i].y = y;
		printf("%d %d\n", x, y);
	}
	printf("\n");
	for (int i = 1; i < n; i++) {
		if (pList[i - 1].x < pList[i].x) {
			temp = pList[i - 1];
			pList[i - 1] = pList[i];
			pList[i] = temp;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", pList[i].x, pList[i].y);
	}
	return 0;
}