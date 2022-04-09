#include "pch.h"
#include "Paddle.h"

Paddle::Paddle() {}

Paddle::Paddle(int w, int h)
{
	screenSize = Vector2(w, h);
	position = Vector2((w / 2) - (SPRITEWIDTH / 1.5f), h - 20);
}

Vector2 Paddle::GetPosition()
{
	return position;
}

void Paddle::SetPosition(Vector2 pos)
{
	position = pos;
}

void Paddle::MovePaddle(bool dir)
{
	if (dir && position.x + BORDEROFFSET + SPRITEWIDTH / 1.5f < screenSize.x)
	{
		position.x += PADDLESPEED;
	}
	else if (!dir && position.x > BORDEROFFSET - SPRITEWIDTH)
	{
		position.x -= PADDLESPEED;
	}
}

Vector2 Paddle::GetScreenSize()
{
	return screenSize;
}