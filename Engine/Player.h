#pragma once
#include "Graphics.h"
#include "MainWindow.h"

class Player {

private:

	static constexpr int height =32;
	static constexpr int width = 32;

	int x ;
	int y ;
	int vx;
	int vy;
	bool movable = true;

public:
	Player(int in_x, int in_y, int in_vx, int in_vy);
	void HandleInput(MainWindow &wnd);
	void Update();
	int GetXPos() const;
	int GetYPos() const;
	int GetWidth() const;
	int GetHeight() const;

	void ClampScreen();
	int animationStatus();


	void DrawFront(Graphics& gfx, int& repeater);
	void DrawLeft(Graphics& gfx);
	void DrawRight(Graphics& gfx);
	void StopMoving();
};