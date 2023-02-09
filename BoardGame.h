#pragma once

#ifndef BOARDGAME_H
#define BOARDGAME_H

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <vector>
#include <string>

using namespace std;

const int SCREEN_WIDTH = 900;
const int SCREEN_HEIGHT = 600;
static TTF_Font* fontText = NULL;


namespace BG {
	void logSDLError(const string& msg, bool fatal);
	void initSDL(SDL_Window*& window, SDL_Renderer*& renderer);
	void quitSDL(SDL_Window* window, SDL_Renderer* renderer);
	SDL_Texture* loadTexture(SDL_Renderer* renderer, string path);
	bool checkCollision(SDL_Rect a, SDL_Rect b);
}

#endif 
