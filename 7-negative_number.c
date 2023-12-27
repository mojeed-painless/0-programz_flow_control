#include <stdio.h>

int main() {

	int number;

	printf("Input a number: ");
	scanf("%d", &number);

	while (1) {
		if (number > 0) {
			printf("Positive Number\n");
		}
		else if (number < 0) {
			printf("Negative Number\n");
		}
		else {
			printf("Zero number\n");
		}

	printf("Input a number: ");
  	scanf("%d", &number);
	}

	return 0;

}
