#include <string.h>
#include <stdio.h>

int main()
{
	int i, j, k, brojPonavljanjaSlova, m = 0;
	char string[100], slovo, izlaz[100] = "\0";
	fgets(string,100,stdin);
	scanf("%d", &k);
	for (i = 0; i < strlen(string); i++){		 //kretanje kroz string
		slovo = string[i];						 //i-to slovo stringa
		brojPonavljanjaSlova = 0;
		for (j = 0; j < strlen(string); j++) {	 //broji koliko se puta i-to slovo pojavljuje u string
			if (string[j] == slovo)
				brojPonavljanjaSlova++;
		}
		if (brojPonavljanjaSlova >= k && strchr(izlaz,slovo)==NULL) {//ako je broj ponavljanja veci od zadatog broja k
			izlaz[m] = slovo;										 //&& ako to slovo vec nije u stringu "izlaz", dodaj to slovo u taj string
			m++;
		}			
	}
	fputs(izlaz,stdout);							//stampanje stringa izlaz (svih slova koji se ponavljaju vise od k puta)
	return 0;
}