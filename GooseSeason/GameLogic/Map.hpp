#pragma once
#include <vector>
#include "Player.h"

namespace GooseSeason
{
	namespace logic
	{
		class Map
		{
		public:
			Map();
			~Map();

		private:
			std::vector<Player>players;
		};
	}
}