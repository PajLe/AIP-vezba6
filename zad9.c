#include <string.h>
#include <stdio.h>


int main()
{
	int i;
	char string[100];
	fgets(string, 100, stdin);
	string[strlen(string) - 1] = '\0';
	for (i = 0; i < strlen(string); i++) {
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] += 'a' - 'A';
	}
	fputs(string, stdout);
	return 0;
}