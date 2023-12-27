#include <stdio.h>

int main () {
	
	int a, b, c;

	printf("Enter the value of angle a: ");
	scanf("%d", &a);

	printf("Enter the value of angle b: ");
        scanf("%d", &b);

	printf("Enter the value of angle c: ");
        scanf("%d", &c);

	int sum = a + b + c;

	if (sum == 180) {
		printf("true\n");
	}
	else {
                printf("false\n");
        }
	return 0;
}
