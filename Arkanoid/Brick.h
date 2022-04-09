#pragma once

#define BRICKSPRITEWIDTHOFFSET 70
#define BRICKSPRITEHEIGHTOFFSET 34

using namespace DirectX::SimpleMath;
using namespace std;

class Brick
{
public:
	Brick();
	Brick(Vector2);

	Vector2 GetPosition();
	bool IsDestroyed();
	void Destroy();
	void Respawn();
private:
	Vector2 position;
	bool isDestroyed;
};