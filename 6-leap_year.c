#include <stdio.h>

int main() {
	

	int year;

	printf("Enter a year: ");
	scanf("%d", &year);

	while (1) {
		if (year % 400 == 0){
			printf("Leap Year\n");
		}
		else if (year % 4 == 0 && year % 100 != 0){
			printf("Leap Year\n");
		}
		else {
			printf("Not a Leap Year\n");
		}

			printf("Enter a year: ");
           		scanf("%d", &year);
	}

	return 0;
}
