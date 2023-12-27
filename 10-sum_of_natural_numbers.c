#include <stdio.h>

int main() {

	int n, i = 1, total = 0;


	printf("Enter a number: ");
	scanf("%d", &n);

	while (1) {
	while (i <= n) {

		total += i;

		i += 1;
		
	}

	printf("The sum is %d\n", total);


	printf("Enter a number: ");
        scanf("%d", &n);

	}
	return 0;
}
