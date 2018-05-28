#include <stdio.h>

int main()
{
	FILE* f = fopen("brojevi.txt", "r+");
	if(f == NULL){
		printf("Fajl \"brojevi.txt\" ne postoji!");
		return 0;
	}
	int i = 0,  niz[100], suma = 0;
	while (!feof(f) && i < 100) {
		fscanf(f, "%d", &niz[i]);
		suma += niz[i];
		i++;
	}
	fprintf(f," %lf", (double)suma / i);
	fclose(f);
	return 0;
}