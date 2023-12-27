#include <stdio.h>

int main () {
	
	int number, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	int originalNumber = number;

	while (number > 0) {
		
		int digit = number % 10;

		sum += digit;

		number /= 10;
	}

	if (originalNumber % sum == 0) {
		printf("Harshad Number\n");
	}
       	else {
                printf("Not a Harshad Number\n");
        }

	return 0;
}
