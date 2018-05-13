#pragma once
#include "Map.hpp"

namespace GooseSeason
{
	namespace Logic
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