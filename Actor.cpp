#include "Actor.h"

#include <iostream>
#include <windows.h>

AActor::AActor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
	Layer = 0;
}

AActor::AActor(int NewX, int NewY, char NewShape, int NewLayer)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
	Layer = NewLayer;
}

AActor::~AActor()
{

}

int AActor::GetX()
{
	return X;
}

int AActor::SetX()
{
	return 0;
}

int AActor::GetY()
{
	return Y;
}

int AActor::SetY()
{
	return 0;
}

char AActor::GetShape()
{
	return Shape;
}

char AActor::SetShape()
{
	return 0;
}

void AActor::Tick()
{
}

void AActor::Render()
{
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	std::cout << Shape;
}
