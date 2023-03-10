#include "Object.h"

Object::Object()
{
	rect.x = 10;
	rect.y = 10;
	rect.w = 100;
	rect.h = 100;
	body = NULL;
}

Object::Object(SDL_Renderer* renderer, string path)
{
	rect.x = 10;
	rect.y = 10;
	rect.w = 100;
	rect.h = 100;
	body = BG::loadTexture(renderer, path);
}

Object::~Object()
{
}

void Object::show(SDL_Renderer* renderer)
{
	SDL_RenderCopy(renderer, body, NULL, &rect);
}

void Object::setImg(SDL_Renderer* renderer, string path)
{
	body = BG::loadTexture(renderer, path);
}

void Object::setPos(int x, int y)
{
	rect.x = x;
	rect.y = y;
}
