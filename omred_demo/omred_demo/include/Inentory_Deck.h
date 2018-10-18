#ifndef INVENTORY_DECK
#define INVENTORY_DECK

#include <vector>
#include "Card.h"
#include "Deck_Player.h"

const auto n = 20;

class Inventory_Deck : public Deck_Player
{

	public:
		Card Give_Card(); // Drop card to map, hand or table
		Card Take_Card(); // Drop card to my fvcking hand 

	private:
		std::vector <Card> Inventory_Deck_List;

};

#endif // !INVENTORY_DECK


