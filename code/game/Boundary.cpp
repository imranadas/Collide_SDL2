#include <display.h>

void display::boundary(){
    SDL_RenderSetScale(renderer, 2.0, 2.0);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

    SDL_RenderDrawLine(renderer, 50/2, 50/2, WIDTH/2 - 50/2, 50/2);
    SDL_RenderDrawLine(renderer, WIDTH/2 - 50/2, 50/2, WIDTH/2 - 50/2, HEIGHT/2 - 50/2);
    SDL_RenderDrawLine(renderer, WIDTH/2 - 50/2, HEIGHT/2 - 50/2, 50/2, HEIGHT/2 - 50/2);
    SDL_RenderDrawLine(renderer, 50/2, HEIGHT/2 - 50/2, 50/2, 50/2);

    SDL_RenderSetScale(renderer, 1.0, 1.0);
}