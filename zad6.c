#include <string.h>
#include <stdio.h>

int main()
{
	FILE* fin = fopen("binarne-cifre.txt", "r");
	if (fin == NULL) {
		printf("Fajl \"binarne-cifre.txt\" ne postoji u radnom folderu!\n");
		return 0;
	}
	int cifra, broj = 0, multiplier = 1;
	do {
		fscanf(fin, "%d", &cifra);
		broj += cifra * multiplier;
		multiplier *= 2;
	} while (!feof(fin));
	fclose(fin);
	printf("Binarni broj u dekadnoj reprezentaciji je: %d\n", broj);
	return 0;
}