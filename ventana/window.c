#include <stdio.h>
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

#define TRUE 1
#define FALSE 0
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
TTF_Font* font = NULL;

//inicializa la ventana
int init_window(void) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("Error SDL_Init: %s\n", SDL_GetError());
        return FALSE;
    }

    if (TTF_Init() == -1) {
        printf("Error TTF_Init: %s\n", TTF_GetError());
        return FALSE;
    }

    int imgFlags = IMG_INIT_PNG;
    if (!(IMG_Init(imgFlags) & imgFlags)) {
        printf("Error IMG_Init: %s\n", IMG_GetError());
        return FALSE;
    }

    window = SDL_CreateWindow(
        "uno",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        0
    );

    if (window == NULL) {
        printf("Error SDL_CreateWindow: %s\n", SDL_GetError());
        return FALSE;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Error SDL_CreateRenderer: %s\n", SDL_GetError());
        return FALSE;
    }

    font = TTF_OpenFont("assets/fonts/Roboto-Bold.ttf", 24);
    if (font == NULL) {
        printf("Error TTF_OpenFont: %s\n", TTF_GetError());
        return FALSE;
    }

    return TRUE;
}


SDL_Texture* load_texture(const char* path) {
    SDL_Texture* texture = IMG_LoadTexture(renderer, path);
    if (texture == NULL) {
        printf("Error IMG_LoadTexture: %s\n", IMG_GetError());
    }
    return texture;
}

void render_text(const char* text, int x, int y) {
    SDL_Color color = {255, 255, 255, 255};
    SDL_Surface* surface = TTF_RenderText_Solid(font, text, color);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_Rect dstrect = {x, y, surface->w, surface->h};

    SDL_FreeSurface(surface);

    SDL_RenderCopy(renderer, texture, NULL, &dstrect);
    SDL_DestroyTexture(texture);
}

int main(int argc, char* argv[]) {
    if (init_window() == FALSE) {
        return 1;
    }

    SDL_Texture* image_texture = load_texture("assets/images/UNO_Logo.svg.png");
    if (image_texture == NULL) {
        return 1;
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // Renderizar la imagen
    SDL_RenderCopy(renderer, image_texture, NULL, NULL);

    // Renderizar el texto
    render_text("Hola mundooooo!(no se lo que estoy haciendo)", 50, 50);

    SDL_RenderPresent(renderer);

    int running = TRUE;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = FALSE;
            }
        }
    }

    SDL_DestroyTexture(image_texture);
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();

    return 0;
}
