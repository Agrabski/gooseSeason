#pragma once
#include "../Geometry/Point.hpp"
#include "Projectile.hpp"

namespace GooseSeason
{
	namespace Logic
	{
		class Projectile;
		class Weapon
		{
			const int maxAmmo;
			const int reloadTime;
			int ammo;
			int timeToReload;
			bool isReloading;

		public:
			enum class WeaponType {Projectile,Hitscan,Throwable};
			Projectile*fire();
			void update(double angle, Geometry::Point origin);
		};
	}
}