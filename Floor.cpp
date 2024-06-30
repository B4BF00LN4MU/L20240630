#include "Floor.h"

AFloor::AFloor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
	Layer = 1;
}

AFloor::AFloor(int NewX, int NewY, char NewShape)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
	Layer = 1;
}

AFloor::~AFloor()
{
}
