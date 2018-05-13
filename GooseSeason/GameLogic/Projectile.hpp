#pragma once
#include "Player.h"
#include "../Geometry/Point.hpp"
#include "../Geometry/Vector.hpp"



namespace GooseSeason
{
	namespace Logic
	{
		class Projectile
		{
		public:
			virtual void hit(Player&) = 0;
			//returns true if projectile should be deleted
			virtual bool update() = 0;
		};

		class HitscanProjectile :public Projectile
		{
			Geometry::Point origin;
			//firing angle in radians
			double angle;

		};

		class StandardProjectile :public Projectile
		{
			Geometry::Point position;
			Geometry::Vector vector;
		};
	}
}