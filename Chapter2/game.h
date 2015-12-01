#ifndef __GAME_H__
#define __GAME_H__

#include "SDL2/SDL.h"

class Game
{
   public:
    Game();
    ~Game();
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    void render();
    void update();
    void handleEvents();
    void clean();
    bool running() {return m_bRunning;}
   private:
    SDL_Window* m_pWindow;
    SDL_Renderer* m_pRenderer;

    SDL_Texture* m_pTexture;
    SDL_Rect m_sourceRectangle;
    SDL_Rect m_destinationRectangle;

    bool m_bRunning;
};

#endif
