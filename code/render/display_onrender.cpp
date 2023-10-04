#include <display.h>

void display::OnRender(){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

    display::boundary();
    
    SDL_RenderSetScale(renderer, 1.0, 1.0);

    game->render(renderer);

    SDL_RenderPresent(renderer);
}