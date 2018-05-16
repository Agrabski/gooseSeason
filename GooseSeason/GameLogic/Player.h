#pragma once
#include "Weapon.hpp"
#include <vector>
#include "../Geometry/Point.hpp"
#include "../Geometry/Vector.hpp"
#include "Projectile.hpp"



namespace GooseSeason
{
	namespace Logic
	{
		class Projectile;

		struct FieringPackage
		{
			bool fire;
			double angle;
		};
		struct MovePackage
		{
			Geometry::Vector direction;
			FieringPackage fire;
		};
		//class used to represent player while in the game
		class Player
		{
		public:
			Player();
			~Player();
			void move(MovePackage p);
			//returns true if player must respawn, accepts empty pointer as argument
			bool update(Projectile*&fired);
			static const int radius;
			Geometry::Point whatPosition()const { return position; }
		private:
			std::vector<Player*>vision;
			Geometry::Point position;
			Geometry::Vector movement;
			FieringPackage firingInstructions;
			std::vector<Weapon> weapons;
			int weaponSelection = 0;
			static const int playerMaxHealth = 100;

			//player's health in precentage
			int privateHealth = playerMaxHealth;
		};
	}
}