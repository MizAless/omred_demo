#ifndef DECK_PLAYER
#define DECK_PLAYER

#include "Card.h"
#include <vector>

class Deck_Player
{

	public:
		Card Give_Card(); // Drop card to map, hand or table
		Card Take_Card(); // Drop card to my fvcking hand 
		
	private:
		std::vector <Card> Cards_On_Deck;

};

#endif // !DECK_PLAYER


