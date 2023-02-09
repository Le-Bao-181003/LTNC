#include "Plane.h"


Plane::Plane(SDL_Renderer* renderer)
{
	x = SCREEN_WIDTH / 2;
	y = SCREEN_HEIGHT * 3 / 4;
	setPos(x, y);
	setImg(renderer, "player.png");
	bullet.setImg(renderer, "laser.png");
	bullet.setPos(x, y);
}

void Plane::move(SDL_Event e)
{
	if (e.type == SDL_MOUSEMOTION) {
			rect.x = e.motion.x - rect.w / 2;
			rect.y = e.motion.y - rect.h / 2;
	}
	if (e.type == SDL_MOUSEBUTTONDOWN) {
		if (!bullet.is_Move()) {
			bullet.setPos(rect.x + rect.w/2 - bullet.getRect().w/2, rect.y + bullet.getRect().h);
			bullet.setStatus(true);
		}
	}
}

Plane::~Plane()
{
}

void Plane::update(SDL_Renderer* renderer)
{
	show(renderer);

	if (bullet.is_Move()) {
		bullet.fire();
		bullet.show(renderer);
	}
}

SDL_Rect Plane::getRectBullet()
{
	return bullet.getRect();
}
