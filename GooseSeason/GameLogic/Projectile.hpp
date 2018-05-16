#pragma once
#include "Player.h"
#include "../Geometry/Point.hpp"
#include "../Geometry/Vector.hpp"



namespace GooseSeason
{
	namespace Logic
	{
		class Player;
		class Projectile
		{
			int damage;
		protected:
			void applyDamage(Player&);
			bool hitRegistered = false;

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
		public:
			virtual void hit(Player&);
			virtual bool update();
		};

		class StandardProjectile :public Projectile
		{
			Geometry::Point position;
			Geometry::Vector vector;
		public:
			virtual bool update();
		};
	}
}