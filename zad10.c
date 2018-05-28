#include <string.h>
#include <stdio.h>

int main()
{
	FILE *fin = fopen("recenice.txt", "r"), *fout = fopen("sadrze.txt", "w");
	int i = 0, m = 10, p = 0;
	char rec[50];
	char recenica[500] = "";
	while (!feof(fin)) {
		strcpy(rec, "\0");
		while (rec[strlen(rec) - 2] != '.') {
			fscanf(fin, "%s", rec);
			strcat(rec, " ");
			strcat(recenica, rec);
		}
		if (strlen(recenica) - 2 > m) {
			fputs(recenica, fout);
		}
		strcpy(recenica, "\0");//recenica[0] = 0;
	}
	fclose(fout);
	fclose(fin);
}