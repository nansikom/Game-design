#ifndef GAME_H
#define GAME_H 

#include "deck.h"
#include "player.h"

class Game
{
private:
	Deck d;
	Player players[2];


public:
	Game();
	void deal_card();
     void check(int);
     void askcardplayer0();
     void askcardplayer1();
     Deck get_deck();
	
};
#endif