#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char word[101];
	scanf("%s", word);
	int count = 0;
	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] == 'a' ||
			word[i] == 'e' ||
			word[i] == 'i' ||
			word[i] == 'o' ||
			word[i] == 'u') {
			count++;
		}
	}
	
	printf("%d\n", count);

	return 0;
}