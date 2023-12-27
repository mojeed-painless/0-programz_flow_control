#include <stdio.h>

int main() {
	
	double score;

	printf("Input student's score: ");
	scanf("%lf", &score);

	while (1){
		
		if (score >= 90) {
			printf("Your grade is A\n");
		}
		else if (score >= 80) {
			printf("Your grade is B\n");
		}
		else if (score >= 70) {
 			printf("Your grade is C\n");
 		}
		else {
			printf("Your grade is D\n");
		}
		
		printf("Input student's score: ");
           	scanf("%lf", &score);
	}

	return 0;
}
