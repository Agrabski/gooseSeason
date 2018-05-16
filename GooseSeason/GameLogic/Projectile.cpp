#include "Projectile.hpp"

void GooseSeason::Logic::HitscanProjectile::hit(Player &p)
{
	if (hitRegistered)
		return;
	double distance = origin.distanceTo(p.whatPosition());
	double angleToTarget = atan2(p.whatPosition().y - origin.y, p.whatPosition().x - origin.x);
	double relativeAngle = abs(asin((double)p.radius / distance));
	if (angle > angleToTarget - relativeAngle && angle < angleToTarget + relativeAngle)
		applyDamage(p);
}

bool GooseSeason::Logic::HitscanProjectile::update()
{
	return true;
}

bool GooseSeason::Logic::StandardProjectile::update()
{
	position += vector;
	return hitRegistered;
}
