#include <stdio.h>
#include <string.h>

void levelOne();
void levelTwo();
int checkAnswer(int expected, int answer);

int main() {
    int choice;

    printf("Welcome to Code Quest!\n");
    printf("Choose a level to start:\n");
    printf("1. Learn about Variables\n");
    printf("2. Learn about Loops\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            levelOne();
            break;
        case 2:
            levelTwo();
            break;
        default:
            printf("Invalid choice, exiting...\n");
    }

    return 0;
}

void levelOne() {
    int userAnswer;
    printf("Level 1: Variables\n");
    printf("Declare an integer variable called 'x' and set its value to 10.\n");
    printf("What is the value of 'x' after this line of code: x = x + 5?\n");
    
    printf("Enter your answer: ");
    scanf("%d", &userAnswer);

    if (checkAnswer(15, userAnswer)) {
        printf("Correct! You've mastered variables!\n");
    } else {
        printf("Incorrect! The correct answer is 15.\n");
    }
}

void levelTwo() {
    int userAnswer;
    printf("Level 2: Loops\n");
    printf("What will be the output of the following loop?\n");
    printf("for(int i = 0; i < 5; i++) { printf(\"%%d \", i); }\n");

    printf("Enter your answer (as a sequence of numbers, e.g., '0 1 2 3 4'): ");
    scanf("%d", &userAnswer);  // This can be expanded to handle sequences of numbers

    // Simplified answer check (a full implementation would involve parsing)
    if (checkAnswer(1234, userAnswer)) {
        printf("Correct! You've mastered loops!\n");
    } else {
        printf("Incorrect! The correct answer is 0 1 2 3 4.\n");
    }
}

int checkAnswer(int expected, int answer) {
    return expected == answer;
}
