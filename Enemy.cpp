#include "Enemy.h"

Enemy::Enemy(SDL_Renderer* renderer, int i)
{
	alive = true;
	x = 100;
	y = 0;
	rect.w = 60;
	rect.h = 60;
	setPos(x, y);
	setImg(renderer, "enemy" + to_string(i) + ".png");
}

Enemy::~Enemy()
{
}

void Enemy::update(SDL_Renderer* renderer)
{
	if (alive) {
		rect.y++;
		show(renderer);
	}
	
}
