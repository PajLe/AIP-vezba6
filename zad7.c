#include <string.h>
#include <stdio.h>

int main()
{
	int postoji = 0;
	FILE* fin = fopen("tekst.txt", "r");
	if (fin == NULL) {
		printf("Fajl \"tekst.txt\" ne postoji u radnom folderu!\n");
		return 0;
	}
	char rec[50], trenutnaRec[50];
	fgets(rec, 50, stdin);
	rec[strlen(rec) - 1] = 0;
	while (!feof(fin) && !postoji) {
		fscanf(fin, "%s", trenutnaRec);
		if (strcmp(rec, trenutnaRec) == 0)
			postoji = 1;
	}
	if (postoji)
		printf("Rec postoji fajlu \"tekst.txt\"");
	else
		printf("Rec ne postoji u fajlu \"tekst.txt\"\n");
	fclose(fin);
	return 0;
}