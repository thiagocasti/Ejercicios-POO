#include <SDL.h>
#include <SDL_ttf.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL no pudo inicializarse. SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Inicializar SDL_ttf
    if (TTF_Init() == -1) {
        printf("SDL_ttf no pudo inicializarse. TTF_Error: %s\n", TTF_GetError());
        SDL_Quit();
        return 1;
    }

    // Crear ventana
    SDL_Window* ventana = SDL_CreateWindow("Ejemplo SDL_ttf",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640, 480,
        SDL_WINDOW_SHOWN);
    if (!ventana) {
        printf("Ventana no pudo ser creada. SDL_Error: %s\n", SDL_GetError());
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Crear renderizador
    SDL_Renderer* renderizador = SDL_CreateRenderer(ventana, -1, 0);
    if (!renderizador) {
        printf("Renderizador no pudo ser creado. SDL_Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(ventana);
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Cargar fuente
    TTF_Font* fuente = TTF_OpenFont("assets/fonts/Roboto-Bold.ttf", 16); // Asegúrate de tener esta fuente o cambia la ruta
    if (!fuente) {
        printf("Fuente no pudo ser cargada. TTF_Error: %s\n", TTF_GetError());
        SDL_DestroyRenderer(renderizador);
        SDL_DestroyWindow(ventana);
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Color del texto
    SDL_Color colorTexto = { 255, 255, 255, 255 }; // Blanco

    // Renderizar texto en una superficie
    SDL_Surface* superficieTexto = TTF_RenderText_Solid(fuente, "HELLO SDL", colorTexto);
    if (!superficieTexto) {
        printf("Texto no pudo ser renderizado. TTF_Error: %s\n", TTF_GetError());
        TTF_CloseFont(fuente);
        SDL_DestroyRenderer(renderizador);
        SDL_DestroyWindow(ventana);
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Convertir superficie a textura
    SDL_Texture* texturaTexto = SDL_CreateTextureFromSurface(renderizador, superficieTexto);
    SDL_FreeSurface(superficieTexto); // No necesitamos más la superficie

    // Ciclo principal (simplificado para el ejemplo)
    SDL_bool corriendo = SDL_TRUE;
    SDL_Event evento;
    while (corriendo) {
        while (SDL_PollEvent(&evento)) {
            if (evento.type == SDL_QUIT) {
                corriendo = SDL_FALSE;
            }
        }

        // Limpiar renderizador
        SDL_RenderClear(renderizador);

        // Renderizar texto
        SDL_Rect destRect;
        destRect.x = 50;  // Posición X en la ventana
        destRect.y = 50;  // Posición Y en la ventana
        destRect.w = 200; // Ancho del texto
        destRect.h = 100; // Alto del texto
        SDL_QueryTexture(texturaTexto, NULL, NULL, &destRect.w, &destRect.h);

        SDL_RenderCopy(renderizador, texturaTexto, NULL, &destRect);

        // Actualizar pantalla
        SDL_RenderPresent(renderizador);
    }

    // Limpieza
    SDL_DestroyTexture(texturaTexto);
    TTF_CloseFont(fuente);
    SDL_DestroyRenderer(renderizador);
    SDL_DestroyWindow(ventana);
    TTF_Quit();
    SDL_Quit();

    return 0;
}