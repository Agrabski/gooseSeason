#pragma once
#include "Weapon.hpp"
#include <vector>


namespace GooseSeason
{
	namespace Logic
	{

		struct MovePackage;
		//class used to represent player while in the game
		class Player
		{
		public:
			Player();
			~Player();
			void move(MovePackage);
			//returns true if player must respawn
			bool update();

		private:
			std::vector<Weapon> weapons;
			int weaponSelection = 0;
			static const int playerMaxHealth = 100;

			//player's health in precentage
			int privateHealth = playerMaxHealth;
		};
	}
}