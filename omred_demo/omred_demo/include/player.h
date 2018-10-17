#ifndef PLAYER
#define PLAYER

#include "Deck_Player.h"

class Player
{

	public:
		void Drop_Card();
		void View_Card();
		/*int Damage_Enemy();*/

	private:
		int HP,
			MP;

	void Ask_for_Drop_Card();
	
	//float level;  (exp = 0.01)

};

#endif // !PLAYER
