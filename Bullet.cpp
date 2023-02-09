#include "Bullet.h"

Bullet::Bullet()
{
	x = 0;
	y = 0;
	isMove = false;
	speed = 10;
	rect.w = 15;
	rect.h = 50;
}

Bullet::~Bullet()
{
}

void Bullet::fire()
{
	if (rect.y < -rect.h) {
		isMove = false;
	}
	rect.y -= speed;
}
