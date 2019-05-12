#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char word[101];
	scanf("%s", word);
	
	int len = 0;
	for (; word[len] != '\0'; len++);

	printf("%d\n", len);
	

	return 0;
}