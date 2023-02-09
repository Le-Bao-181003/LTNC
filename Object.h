#pragma once

#include "BoardGame.h"

class Object {
protected:
	SDL_Rect rect;
	SDL_Texture* body;
public:
	Object();
	Object(SDL_Renderer* renderer, string path);
	~Object();
	void show(SDL_Renderer* renderer);
	void setImg(SDL_Renderer* renderer, string path);
	void setPos(int x, int y);
	SDL_Rect getRect() const {
		return rect;
	}



};


