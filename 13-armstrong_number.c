#include <stdio.h>
#include <string.h>

int power(int base, int power) {
	
	int result = 1;

	for(int i = 0; i < power; ++i) {
		
		result *= base;  
	}
	
	return result;
}

int main() {
	
	int n;

	int number[3];

	int sum = 0;

	
	printf("Enter the digits:");
		for (int j = 0; j < 3; ++j) {
			scanf("%d", &number[j]);
		}


	for (int i = 0; i < 3; ++i){
		int cube = power(number[i], 3);

		sum += cube;
	}


	printf("%d\n", sum);
	
	n = (number[0] * 100) + (number[1] * 10) + (number[2] * 1);

	if (sum == n) {
		printf("Armstrong Nmuber\n");
	}
	else {
		printf("Not an Armstrong Number\n");
	}






	return 0;
}
