#include <stdio.h>
#include <ctype.h>

int main() {

	char n;

	printf("Enter an alphabet: ");
	scanf("%c", &n);
	
	n = tolower(n);

	int alpha = (int) n;

	
		if (alpha >= 97 && alpha <= 122) {
		printf("Alphabet\n");
	}
	else {
		printf("Not an Alphabet\n");
	}
	return 0;

}
