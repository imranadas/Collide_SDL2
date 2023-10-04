#include <display.h>

bool display::OnInit(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }
    
    window = SDL_CreateWindow("EntropY's Collide", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_VULKAN);

    if(window==NULL) {
        return false;
    }

    renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_PRESENTVSYNC);

    if(renderer == NULL){
        return false;
    }

    game = new Game(WIDTH/2,HEIGHT/2);

    return true;
}