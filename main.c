#include <windows.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	SDL_Window *pWin = SDL_CreateWindow("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Log("Starting\n");

	SDL_Delay(5000);
	if (pWin)
	{
		SDL_DestroyWindow(pWin);
	}
	SDL_Log("End\n");
	SDL_Quit();
	return 0;
}