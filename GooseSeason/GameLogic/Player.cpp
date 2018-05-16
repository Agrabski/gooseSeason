#include "Player.h"

void GooseSeason::Logic::Player::move(MovePackage p)
{
	firingInstructions = p.fire;
	movement = p.direction;
}
