#include <stdio.h>
int main () {

	int number, n = 0, i;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (i = 0; i < 100; ++i) {
		
		if (i % number != 0) {
			continue;
		}

		n = i;	
	}

	printf("The highest multiple of %d is %d\n", number, n);

	return 0;
}
