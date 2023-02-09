#pragma once
#include "Object.h"
#include "Bullet.h"

class Plane : public Object {
private:
	int x;
	int y;
	Bullet bullet;
public:
	Plane(SDL_Renderer* renderer);
	void move(SDL_Event e);
	~Plane();
	void update(SDL_Renderer* renderer);
	SDL_Rect getRectBullet();
	Bullet getBullet() { return bullet; }
};


