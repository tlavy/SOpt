#include <stdio.h>
#include <stdlib.h>

void BinFormat(char character, char *text) {
	text[8] = '\0';
    for (int i = 7; i >= 0; i--) text[i] = ((character >> (i - 1)) & 1) + '0';
}

int main(void) {
	char *text = malloc(9);
	BinFormat('A', text);
	printf("%s", text);
}

//https://pt.stackoverflow.com/q/286742/101
