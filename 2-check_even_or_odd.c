#include <stdio.h>

int main() {
	
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	while(1) {
		if(number % 2 == 0 && number != 0) {
			printf("Even\n");

		}
		else if(number == 0){
			break;
		}
		else {
			printf("Odd\n");
		}

		printf("Enter a number: ");
		scanf("%d", &number);
	}



	return 0;

}
