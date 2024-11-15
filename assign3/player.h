
#ifndef PLAYER1_H
#define PLAYER1_H


#include "hand1.h"
# include"deck.h"
class Player {
 private:
 Hand hand;
 int* books; // Array with ranks for which the player has books.
 int n_books;
 public:
 // must have constructors, destructor, accessors, and mutators.
Player( Hand , int* , int );
 	Player();
     Player(const Player&);
     Player& operator=(const Player&);
     Player(Deck& );
     ~Player();
     int* get_books( );
     int getn_books();
     Hand& get_hand();
     Card randCard();
     void removeBook(int);
     void place_a_card(Card& );
     void print_player_hand();
     bool call_check_player(int);
     void  get_matches(Player&, int);
    
    

};
#endif

