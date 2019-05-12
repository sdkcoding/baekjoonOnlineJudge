#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while (getchar() != '\n');
	char ** words = new char*[n] {0};
	for (int i = 0; i < n; i++) {
		words[i] = new char[40]{ 0 };
	}

	for (int i = 0; i < n; i++) {
		fgets(words[i], 40, stdin);
		if ((0 <= words[i][0] - 'a') && (words[i][0] - 'a' < 26)) {
			words[i][0] = words[i][0] - 'a' + 'A';
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s", words[i]);
		delete[] words[i];
	}
	printf("\n");
	delete[] words;
	return 0;
}