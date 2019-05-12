#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char word[101];
	scanf("%s", word);
	
	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] - 'A' < 26) {
			word[i] = word[i] - 'A' + 'a';
		}
		else {
			word[i] = word[i] - 'a' + 'A';
		}
	}
	
	printf("%s\n", word);
	return 0;
}