#pragma once

#include "Object.h"
class Bullet : public Object{
private:
	int x;
	int y;
	bool isMove;
	int speed;
public:
	Bullet();
	~Bullet();
	void fire();
	void setStatus(bool _isMove) {
		isMove = _isMove;
	}
	bool is_Move() { return isMove; }

};


