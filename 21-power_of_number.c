#include <stdio.h>

int main () {

	int base, power, result = 1;

	printf("Enter the base: ");
	scanf("%d", &base);

	printf("Enter the power: ");
        scanf("%d", &power);

	for (int i = 0; i < power; ++i) {
		result *= base;
	}

	printf("%d\n", result);

	return 0;
}
