#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "screen.h"
#include "keyboard.h"
#include "cli.h"  

void initializeGame(Game *game) {
    srand(time(0));
    game->secretNumber = rand() % 100 + 1;
    game->attempts = 10;
    game->score = 10;
    game->guesses = (int *)malloc(game->attempts * sizeof(int));
}

void playTurn(Game *game) {
    int guess = getUserGuess();
    game->guesses[10 - game->attempts] = guess;

    if (guess == game->secretNumber) {
        showMessage("Parabéns! Você acertou o número secreto!");
        game->attempts = 0;
    } else if (guess < game->secretNumber) {
        showMessage("O número secreto é maior!");
        game->attempts--;
        game->score--;
    } else {
        showMessage("O número secreto é menor!");
        game->attempts--;
        game->score--;
    }
}

void endGame(Game *game) {
    if (game->score > 0) {
        showMessage("Parabéns! Você terminou com pontos!");
    } else {
        showMessage("Fim de jogo! O número secreto era...");
    }
    showGuesses(game->guesses, 10 - game->attempts);
    free(game->guesses);
}
