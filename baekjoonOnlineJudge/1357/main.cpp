#include <iostream>
#include <cstdio>

using namespace std;

int Rev(int num) {
	int reverse = 0;
	while (num > 0) {
		reverse = (num % 10) + (reverse * 10);
		num /= 10;
	}
	return reverse;
}
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", Rev(Rev(x) + Rev(y)));
	return 0;
}