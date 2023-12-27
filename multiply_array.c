#include <stdio.h>
#include <string.h>

int main() {

	int number, primeNumbers[5] = {2, 3, 5, 7, 11};

	printf("Enter a number: ");
	scanf("%d", &number);

	for (int i = 0; i < 5; ++i) {
		int sum = *(primeNumbers + i) * number;

		printf("%d\n", sum);
	}
	

	return 0;

}
