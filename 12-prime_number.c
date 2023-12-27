#include <stdio.h>

int main() {
	
	int n, flag = 0;

	printf("Enter a number to check: ");
	scanf("%d", &n);

	while (1) {
		
		for (int i = 2; i < n; ++i){
			
			int divide = n % i;

			if(divide == 0) {
				flag = 1;
				break;
			}
		}

		if(flag == 1) {
			printf("Not a Prime Number\n");
		}
		else {
			printf("Prime Number\n");
		}
		
		flag = 0;

		printf("Enter a number to check: ");
        	scanf("%d", &n);

	}

	return 0;
}
