#pragma once
#define SPRITEWIDTH 104
#define BORDEROFFSET 78
#define PADDLESPEED 3.f

using namespace DirectX::SimpleMath;
using namespace std;

class Paddle
{
public:
	Paddle();
	Paddle(int, int);

	Vector2 GetPosition();
	void SetPosition(Vector2);
	void MovePaddle(bool);
	Vector2 GetScreenSize();
private:
	Vector2 position;
	Vector2 screenSize;
};