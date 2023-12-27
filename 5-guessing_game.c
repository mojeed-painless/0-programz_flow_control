#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL));

	int correctNumber = (rand() % 100) + 1, guessedNumber;

	printf("Guess a number between 1 - 100: ");
	scanf("%d", &guessedNumber);

	while (1) {
		
		if (guessedNumber == correctNumber) {
			printf("YOU WIN!\nYour guess is correct\n");
			break;
		}
		else if (guessedNumber > correctNumber) {
			printf("Wrong, your guess is larger\nTRY AGAIN\n");
		}
		else {
			printf("Wrong, your guess is smaller\nTRY AGAIN\nTRY AGAIN\n");
		}

		printf("Guess a number between 1 - 100: : ");
        	scanf("%d", &guessedNumber);
	}




	return 0;
}
