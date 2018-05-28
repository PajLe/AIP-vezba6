#include <string.h>
#include <stdio.h>

int main()
{
	char zadatiString[100], p;
	fgets(zadatiString, 100, stdin);
	zadatiString[strlen(zadatiString) - 1] = '\0';
	int i;
	while (zadatiString[strlen(zadatiString) - 1] != ' ') {
		for (i = strlen(zadatiString) - 1; i > 0; i--) {
			p = zadatiString[i];
			zadatiString[i] = zadatiString[i - 1];
			zadatiString[i - 1] = p;
		}	
	}
	fputs(zadatiString, stdout);
	return 0;
}