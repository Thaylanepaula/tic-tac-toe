#include <stdio.h>
#include "keyboard.h"

int getUserGuess() {
    int guess;
    printf("Digite seu palpite (entre 1 e 100): ");
    scanf("%d", &guess);
    return guess;
}
