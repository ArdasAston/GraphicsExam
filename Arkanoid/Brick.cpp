#include "pch.h"
#include "Brick.h"

Brick::Brick() {}

Brick::Brick(Vector2 v)
{
	position = v;
	isDestroyed = false;
}

Vector2 Brick::GetPosition()
{
	return position;
}

bool Brick::IsDestroyed()
{
	return isDestroyed;
}

void Brick::Destroy()
{
	isDestroyed = true;
}

void Brick::Respawn()
{
	isDestroyed = false;
}