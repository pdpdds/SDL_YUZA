#ifndef _HELPER_H_
#define _HELPER_H_


#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

SDL_Window   *Window;
SDL_Renderer *Renderer;

void init (void);
void exit_(void);

#endif
