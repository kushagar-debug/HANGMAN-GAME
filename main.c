#include <stdio.h>
#include <string.h>

int main() {
    char secretWord[] = "apple";
    char guessedWord[] = "_____";
    int wrongGuesses = 0;
    char guess;
    
    printf("Welcome to Hangman!\n");

    while (wrongGuesses < 3 && strcmp(secretWord, guessedWord) != 0) {
        printf("\nWord: %s\n", guessedWord);
        printf("Guess a letter: ");
        scanf(" %c", &guess);

        int correct = 0;
        for (int i = 0; i < strlen(secretWord); i++) {
            if (secretWord[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                correct = 1;
            }
        }

        if (!correct) {
            wrongGuesses++;
            printf("Wrong guess! Chances left: %d\n", 3 - wrongGuesses);
        }
    }

    if (strcmp(secretWord, guessedWord) == 0) {
        printf("\nYou won! The word was: %s\n", secretWord);
    } else {
        printf("\nYou lost! The word was: %s\n", secretWord);
    }

    return 0;
}
