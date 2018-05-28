#include <string.h>
#include <stdio.h>

void nadovezi(char* destinacija, const char* izvor) {
	int i;
	for (i = 0; i < strlen(izvor); i++) {
		destinacija[strlen(destinacija)] = izvor[i];
		destinacija[strlen(destinacija) + 1] = '\0';
	}
}
int main()
{
	char string1[150], string2[70];
	fgets(string1, 150, stdin);
	string1[strlen(string1) - 1] = '\0';
	fgets(string2, 70, stdin);
	string2[strlen(string2) - 1] = '\0';
	nadovezi(string1, string2);
	fputs(string1, stdout);
	return 0;
}