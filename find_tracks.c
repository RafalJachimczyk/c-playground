#include <stdio.h>
#include <string.h>

char tracks[][80] = {
	"Czerwone korale",
	"Dlugość dzwięku samotności",
	"Widziałam orła cień",
	"Sokoły",
	"Co powie siara"
};

void find_tracks(char searched_string[]) {
	int i;
	for(i = 0; i < 5; i++) {
		if (strstr(tracks[i], searched_string) != NULL) {
			printf("Znaleziono utwór[%i]: %s\n", i, tracks[i]);
		}
	}
}

int main() {
	char searched_string[80];
	printf("Enter searched string: ");	
	fgets(searched_string, 80, stdin);

	if(searched_string[strlen(searched_string)-1] == '\n')
   		searched_string[strlen(searched_string)-1] = '\0';

	find_tracks(searched_string);
	return 0;
}