#pragma once
class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape = ' ', int NewLayer = 0);

	virtual ~AActor();

	int Layer;

	int GetX();
	int SetX();

	int GetY();
	int SetY();

	char GetShape();
	char SetShape();

	virtual void Tick();
	virtual void Render();



protected:
	int X;
	int Y;
	char Shape;
};

