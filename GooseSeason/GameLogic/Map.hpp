#pragma once
#include <vector>
#include "Player.h"

namespace GooseSeason
{
	namespace Logic
	{
		class Map
		{
		public:
			Map();
			~Map();
			void update();
		private:
			std::vector<Projectile*>projectiles;
			std::vector<Player>players;
		};
	}
}