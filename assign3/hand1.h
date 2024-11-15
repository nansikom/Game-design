#include "card1.h"
#ifndef HAND1_H
#define HAND1_H
#include "deck.h"


class Hand
{
private:
 Card* cards; // An array of cards in hand
 int n_cards; // Number of cards in the hand.

 public:
 // must have constructors, destructor, accessors, and mutators
 	Hand();
     Hand(const Hand&);
     Hand& operator=(const Hand&);

 	~Hand();
    Hand(Card* , int);
     Card*  getcards();
     int  getn_cards();
 	void add_card(Card &);
     void give(Deck* );
     bool hasRank(int);
    
     //bool checkRank(int );
     bool checkBook(int );
   Card removeCard(int );
   Card* steal_card(int);
   void  print_Hand();
   Card checkplayer(int);
   int  countcards(int);

};
#endif
