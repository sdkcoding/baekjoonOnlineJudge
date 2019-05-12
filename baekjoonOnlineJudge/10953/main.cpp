#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	int sum = 0;
	int op1, op2;
	for (int i = 0; i < t; i++) {
		scanf("%d,%d", &op1, &op2);
		sum = op1 + op2;
		printf("%d\n", sum);
	}

	return 0;
}