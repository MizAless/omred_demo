#ifndef CARD_STACK_ON_HAND
#define CARD_STACK_ON_HAND

#include <vector>
#include "Card.h"
#include "Deck_Player.h"

class Card_Stack_On_Hand : public Deck_Player
{

	public:
		Card Give_Card(); // Drop card to map, hand or table
		Card Take_Card(); // Drop card to my fvcking hand 

	private:
	std::vector 
		<Card> Card_Stack_On_Hand;
};

#endif // !CARD_STACK_ON_HAND