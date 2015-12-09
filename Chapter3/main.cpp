/*
 *
 *
 */
#include <iostream>

#include "SDL2/SDL.h"
#include "game.h"

Game* g_game = NULL;



int main(int argc, char *argv[])
{
    g_game = new Game();

    g_game->init("Chapter 1", 100, 100, 800, 600, 0);

    while(g_game->running()){
        g_game->handleEvents();
        g_game->update();
        g_game->render();

        SDL_Delay(10);
    }

    g_game->clean();

    return 0;    
}
