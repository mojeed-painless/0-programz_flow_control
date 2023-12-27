#include <stdio.h>

int main () {

	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (int i = 1; i < number; ++i) {
	
		if (number % i != 0) {
			continue;
		}

		printf("%d\n", i);
	}

	return 0;
}
