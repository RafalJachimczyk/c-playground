#include <stdio.h>
#include <string.h>


void print_reverse(char *s) {
	size_t len = strlen(s);
	printf("\nlength %zu\n", len);
	char *t = s + len - 1;
	while (t >= s) {
		printf("%c", *t);
		t = t - 1;
	}
	puts("");
}

void read_chars(char *entered_string) {
	
	printf("Enter string to be reversed: ");	
	fgets(entered_string, 80, stdin);

	if(entered_string[strlen(entered_string)-1] == '\n')
   		entered_string[strlen(entered_string)-1] = '\0';

}

int main() {
	
	char entered_string[80];
	read_chars(entered_string);

	printf("Reversed string is: ");
	print_reverse(entered_string);

	return 0;
}