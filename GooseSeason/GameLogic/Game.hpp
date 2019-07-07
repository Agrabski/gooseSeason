#pragma once
#include "Map.hpp"

namespace GooseSeason
{
	namespace logic
	{
		class Game
		{
		public:
			void registerPlayer(Player);

		private:
			Map map;
		};
	}
}