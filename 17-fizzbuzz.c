#include <stdio.h>

int main () {

	int number;

	printf("Enter a number: ");
	scanf("%d", &number);
	
	
	if (number % 3 == 0) {
		if (number % 5 == 0) {
                	printf("FizzBuzz\n");

        	}
		else {
		printf("Fizz\n");
		}
	}
	else if (number % 5 == 0) {
                printf("Buzz\n");
        }
	else {
		printf("%d\n", number);
	}
	return 0;
}
