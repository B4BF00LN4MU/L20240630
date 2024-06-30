#include "Monster.h"

AMonster::AMonster()
{
	X = 1;
	Y = 1;
	Shape = ' ';
	Layer = 5;
}

AMonster::AMonster(int NewX, int NewY, char NewShape)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
	Layer = 5;
}

AMonster::~AMonster()
{
}
