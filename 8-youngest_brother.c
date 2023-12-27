#include <stdio.h>

int main() {
	

	int jack, roman, johnny;

	printf("Enter Jack's age: ");
	scanf("%d", &jack);

	printf("Enter Roman's age: ");
  	scanf("%d", &roman);

  	printf("Enter Johnny's age: ");
  	scanf("%d", &johnny);

	printf("\nJack's age is %d\n", jack);
	printf("Roman's age is %d\n", roman);
	printf("Johnny's age is %d\n\n", johnny);
	
	if (jack < roman && jack < johnny) {
		printf("Jack is the youngest\n");
	}
	else if (roman < jack && roman < johnny) {
 		printf("Roman is the youngest\n");
 	}
	else if (jack == roman && jack == johnny && roman == johnny) {
		 printf("They are triplet\n");
	}
	else {
		printf("Johnny is the youngest\n\n");
	}

	return 0;
}
