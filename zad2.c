#include <string.h>
#include <stdio.h>

int main()
{
	char recenica[400];
	char* rec;
	printf("Unesi recenicu: ");
	gets(recenica);
	rec = strtok(recenica, " ");
	FILE* f = fopen("reci.txt", "w");
	while (rec != NULL) {
		fprintf(f, "%s\n", rec);
		rec = strtok(NULL, " ");
	}
	fclose(f);
	return 0;
}