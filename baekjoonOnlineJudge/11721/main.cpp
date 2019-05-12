#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char word[101];
	scanf("%s", word);
	
	for (int i = 0; word[i] != '\0'; i++) {
		printf("%c", word[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}
	
	return 0;
}