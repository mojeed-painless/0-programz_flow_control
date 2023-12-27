#include <stdio.h>

int main() {
	
	int i = 1, number, product;

	printf("Enter a number: ");
	scanf("%d", &number);

	while (i <= 10) {
		
		product = number * i;

		printf("%d * %d = %d\n", number, i, product);

		i += 1;
	}

	return 0;
}
