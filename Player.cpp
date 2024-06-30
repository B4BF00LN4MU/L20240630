#include "Player.h"
#include "Engine.h"

APlayer::APlayer()
{
	X = 1;
	Y = 1;
	Shape = ' ';
	Layer = 4;
}

APlayer::APlayer(int NewX, int NewY, char NewShape)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
	Layer = 4;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	switch (UEngine::KeyCode)
	{
	case 'W':
	case 'w':
		Y--;
		break;
	case 'S':
	case 's':
		Y++;
		break;
	case 'A':
	case 'a':
		X--;
		break;
	case 'D':
	case 'd':
		X++;
		break;
	}
}
