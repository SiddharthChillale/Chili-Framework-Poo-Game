#pragma once
#include "Graphics.h"
#include "Player.h"

class Poo {

public :
	void Init(int in_x, int in_y, int in_vx, int in_vy);

	void Update();
	void Draw(Graphics& gfx) const;
	void isCollidingCheck(const Player& player);
	bool IsEaten() const;
	void StopMoving();
private:

	static constexpr int width = 24;
	static constexpr int height = 22;
	int x;
	int y;
	int vx;
	int vy;

	bool initialized = false;
	bool isEaten=false;
};
