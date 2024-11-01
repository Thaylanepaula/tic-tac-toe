#include <stdio.h>
#include "screen.h"

void showInstructions() {
    printf("Bem-vindo ao Secret Seeker!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");
    printf("Você tem 10 tentativas. Boa sorte!\n\n");
}

void showMessage(const char *message) {
    printf("%s", message);
}

void showGuesses(int *guesses, int totalGuesses) {
    printf("Palpites feitos: ");
    for (int i = 0; i < totalGuesses; i++) {
        printf("%d ", guesses[i]);
    }
    printf("\n");
}

