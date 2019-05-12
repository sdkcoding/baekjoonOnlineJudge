#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	int num;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d\n", sum);
	

	return 0;
}