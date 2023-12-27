#include <stdio.h>

int main() {
	
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	while (1) {
		
		if (age >= 18 ){
			printf("Can Vote\n");
		}
		else if(age <= 0){
			printf("Invalid Age\n");
		}
		else {
			printf("Cannot Vote\n");
		}



		printf("Enter your age: ");
  		scanf("%d", &age);
	}



	return 0;
}
