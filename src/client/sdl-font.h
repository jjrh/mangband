/* File: sdl-font.h */
/* Purpose: SDL-font header file for mangband */
#ifndef SDL_FONT_H

#if defined(USE_SDL) || defined(USE_SDL2)
#include <SDL.h>

extern errr sdl_font_init(); 
extern errr sdl_font_quit(); 

extern SDL_Surface* sdl_font_load(cptr filename, SDL_Rect* info, int fontsize, int smoothing);

#endif

#endif