#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    // init SDL
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        return -1;
    }

	SDL_Window *window;
    SDL_Surface* screenSurface = NULL;

	window = SDL_CreateWindow(
		"SDL_Window",
		100,
		100,
		640,
		480,
		SDL_WINDOW_FULLSCREEN_DESKTOP
		);

    if( window == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        } else {

           screenSurface = SDL_GetWindowSurface( window );

            //Fill the surface white
            SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
            
            //Update the surface
            SDL_UpdateWindowSurface( window );        	

            SDL_Delay(5000);
        }

	

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}