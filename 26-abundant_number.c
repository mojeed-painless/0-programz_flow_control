#include <stdio.h>

int main () {
	

	int number, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (int i = 1; i < number; ++i) {
		if (number % i != 0) {
			continue;
		}

		sum += i;
	}

	if (sum > number) {
		printf("Abuntdant Number\n");
	}
	else {
                printf("Not an Abuntdant Number\n");
        }

	return 0;
}
