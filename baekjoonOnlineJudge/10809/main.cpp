#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char word[100];
	scanf("%s", word);

	int alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}

	int idx = 0;
	for (int i = 0; word[i] != '\0'; i++) {
		idx = word[i] - 'a';
		if(alphabet[idx] == -1){
			alphabet[idx] = i;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
	printf("\n");

	return 0;
}