#include "screen.h"
#include "cli.h"  

void showInstructions() {
    cli_print("Bem-vindo ao Secret Seeker!\n");
    cli_print("Adivinhe o número secreto entre 1 e 100. Você tem 10 tentativas. Boa sorte!\n");
}

void showMessage(const char *message) {
    cli_print("%s\n", message); 
}

void showGuesses(int *guesses, int totalGuesses) {
    cli_print("Seus palpites: ");
    for (int i = 0; i < totalGuesses; i++) {
        cli_print("%d ", guesses[i]);
    }
    cli_print("\n");
}


