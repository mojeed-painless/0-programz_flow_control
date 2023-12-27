#include <stdio.h>

int main() {
	

	int n, factorial = 1, i = 1;

	printf("Enter a number: ");
	scanf("%d", &n);
	
	while (i <= n) {

		factorial = factorial * i;

		i = i + 1;
	}

	printf("The value of %d factorial is: %d\n", n, factorial);
	return 0;
}
