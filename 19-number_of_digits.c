#include <stdio.h>
#include <string.h>

int main () {

	int number; 
	
	int count = 0;
	

	printf("Enter a number: ");
	scanf("%d", &number);
	
	for (int i = number; i > 0; --i) {
		number = number / 10;
		count += 1;
		
		if (number == 0) {
			break;
		}

	}

	printf("The amount of digits is %d\n", count);
	return 0;
}
