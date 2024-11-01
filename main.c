#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "keyboard.h"
#include "screen.h"

int main() {
    Game game;
    initializeGame(&game);

    showInstructions(); // Função para mostrar as instruções ao jogador

    while (game.attempts > 0) {
        playTurn(&game); // Captura e processa o palpite do jogador
    }

    endGame(&game); // Mostra o resultado final e libera a memória

    return 0;
}

