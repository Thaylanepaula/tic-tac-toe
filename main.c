#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "keyboard.h"
#include "screen.h"
#include "cli.h" 

int main() {
    Game game;
    initializeGame(&game);

    showInstructions(); 

    while (game.attempts > 0) {
        playTurn(&game); 
    }

    endGame(&game); 

    return 0;
}

