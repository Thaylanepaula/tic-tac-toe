#include "keyboard.h"
#include "cli.h"  

int getUserGuess() {
    int guess;
    cli_input("Digite seu palpite (entre 1 e 100): ", &guess); 
    return guess;
}

