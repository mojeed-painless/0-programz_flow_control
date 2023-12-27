#include <stdio.h>

int main () {

	int number, i, n = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (i = 1; i < number; ++i){
		//int highestFactor = (number / i);

		if (number % i != 0){
			continue;
		}
		
		n = i;	

		//printf("The greatest factor of %d is %d\n", number, highestFactor);	
	}

	printf("The greatest factor of %d is %d\n", number, n);
	return 0;
}
