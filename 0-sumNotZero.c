#include <stdio.h>

	int main() {
		
		int i, total = 0;

		while (i > 0) {

			printf("input a number: ");
			scanf("%d", &i);

			total = total + i;
		}

		printf("The total is: %d\n", total);

		return 0;
	}
