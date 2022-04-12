#pragma once
#define PADDLEOFFSET 43
#define SPRITEWIDTH 22
#define BALLOFFSET 36
#define BALLSPEED 3.f

using namespace DirectX::SimpleMath;
using namespace std;

class Ball
{
public:
	Ball();
	Ball(Vector2);

	Vector2 GetPosition();
	void SetPosition(Vector2);

	Vector2 GetScreenSize();
	Vector2 GetVelocity();
	void SetVelocity(Vector2);

	bool IsAttached();
	void Attach();
	bool IsUnderPaddle();

	void DetachBall();
	void SetDirection(int);
	void ChangeVerticalDir();
	void ChangeHorizontalDir();
	void UpdatePosition(int);
private:
	Vector2 screenSize;
	Vector2 position;
	bool controlled;
	Vector2 velocity;
	int pitDirection;
};