#include <stdio.h>

int main () {
	

	double first, second, result;
	char op;

	/*while (op != '+' || op != '-' || op != '*' || op != '/') {

	printf("Enter an operator (+, -, * or /): ");
	scanf("%c", &op);

	}*/
	
	printf("Enter an operator (+, -, * or /): ");
        scanf("%c", &op);

	printf("Enter first number: ");
        scanf("%lf", &first);

        printf("Enter second number: ");
        scanf("%lf", &second);
	

	/*printf("Enter first number: ");
        scanf("%lf", &first);

	printf("Enter second number: ");
        scanf("%lf", &second);*/

	switch (op) {

		case '+':
		result = first + second;
	       	printf("Answer = %.1lf\n", result);
		break;

		case '-':
                result = first - second;
                printf("Answer = %.1lf\n", result);
                break;	

		case '*':
                result = first * second;
                printf("Answer = %.1lf\n", result);
                break;

		case '/':
                result = first / second;
                printf("Answer = %.1lf\n", result);
                break;
		
		default:
		printf("Invalid Operator\n");
	}

	return 0;
}
