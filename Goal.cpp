#include "Goal.h"

AGoal::AGoal()
{
	X = 1;
	Y = 1;
	Shape = ' ';
	Layer = 3;
}

AGoal::AGoal(int NewX, int NewY, char NewShape)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
	Layer = 3;
}

AGoal::~AGoal()
{
}
