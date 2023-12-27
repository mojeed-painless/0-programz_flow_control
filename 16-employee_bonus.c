#include <stdio.h>

int main (){
	
	double salary;
	int years;
	double bonus;

	printf("Enter Salary: ");
	scanf("%lf", &salary);

	printf("Enter Years of service: ");
        scanf("%d", &years);

	double bonus_ratio = 5 / (double) 100;

	bonus = bonus_ratio * salary;

	if (years > 5) {
		printf("Your bonus is %.2lf\n", bonus);
	}
	else {
		printf("You are not entitle to this bonus.\n");
	}



	return 0;
}
