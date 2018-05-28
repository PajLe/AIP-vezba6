#include <string.h>
#include <stdio.h>

int main()
{
	char R[] = "ja sam ja jeremija prezivam se krstic :))))))", rec[] = "ja";
	char* trenutnaRec = strtok(R, " ");
	int brojPojavljivanja = 0;
	while (trenutnaRec != NULL) {
		if (strcmp(R, trenutnaRec) == 0) {
			brojPojavljivanja++;
		}
		trenutnaRec = strtok(NULL, " ");
	}
	printf("Zadata rec se pojavljuje %d puta.", brojPojavljivanja);
	return 0;
}