#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int r = rand() % 100 +1 ;
    int correct = 0; 
    int guess; 
    int counter = 0; 

    printf("Guess my number! (between 1 to 100) "); 
	do {
        scanf("%d", &guess);
        if (guess == r) {
            counter++;
            printf("You guessed correctly in %d tries! Congratulations!\n", counter);
            correct = 1; 
        }
        //printf("You guessed correctly in %d tries! Congratulations!\n", counter);

        if (guess < r) {
            counter++;
            printf("Your guess is low. Guess again. ");
        	}

        if (guess > r) { 
            counter++; 
            printf("Your guess is high. Guess again. ");
        }
    } while (correct == 0);
return 0;
}

