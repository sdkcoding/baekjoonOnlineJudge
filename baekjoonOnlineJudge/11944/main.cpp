#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int num = n;
	int len = 0;

	while (num / 10) {
		len++;
		num /= 10;
	}
	len += 1;

	num = n;
	char* number = new char[len + 1] { 0 };
	char ch;
	int s = len - 1;
	while (num > 0) {
		ch = (num % 10) + '0';
		number[s--] = ch;
		num /= 10;
	}
	
	char word[3000] = {0};
	int wordlen = 0;
	int a = 0;
	bool flag = false;
	for (int i = 0; i < n; i++) {
		while (a < len) {
			word[wordlen++] = number[a++];
			if (wordlen == m) {
				flag = true; break;
			}
		}
		if (flag) {
			break;
		}
		a = 0;
	}

	printf("%s\n", word);
	delete[] number;
	return 0;
}