#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[50];
    char choice[50];

     printf("\n                ======== GUESSING GAME =======\n\n");
     printf("Welcome to the Guessing Game!\n");
    printf("Please enter your name to play the game: ");
    scanf("%s", name);

    printf("\nWelcome, %s\n", name);
    printf("Do you want to play the Guessing Game? reply 'yes' or 'no'\n");
    scanf("%s", choice);

    if ((strcmp(choice, "yes" ) == 0)|| (strcmp(choice, "YES") == 0) || (strcmp(choice, "Yes") == 0) ){
        printf("\nKindly note that you have 4 available trials");
        srand(time(NULL));
        int min = 0;
        int max = 9;
        int winningNumber = (rand() % (max - min + 1)) + min;
        int userNumber;

        for (int i = 4; i >= 0; i-- ) {
            if (winningNumber == userNumber){
                break;
            }
            if (i == 0){
                printf("You lose!! the Winning Number is %d \n", winningNumber);
                break;
            }
        printf("\nPlease guess a number between the range of 0 to 9. NUMBERS OF TRAILS AVAILABLE %d \n", i);
        scanf("%d", &userNumber);
        if (winningNumber == userNumber){
            printf("        Congratulations! %s You Won!!!!", name);
        } else {
            printf("You lose!! Try Again.\n");
        }        }

    } else{
        printf("\n      Goodbye %s\n", name);
    }
    return 0;
}
