#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char word[101];
	scanf("%s", word);
	
	for (int i = 0; word[i] != '\0'; i++) {
		if ((word[i] - 'A' < 26) && word[i] != '-') {
			printf("%c", word[i]);
		}
	}
	printf("\n");

	return 0;
}