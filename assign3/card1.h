#include <iostream>
#include <string>
using namespace std;
#ifndef CARD1_H
#define CARD1_H 
class Card {
private:
 int rank; // Should be in the range 0-12.
 int suit; // Should be in the range 0-3.
 public:
 // must have constructors, destructor, accessors, and mutators.
 	Card(int , int );
      Card();
      Card(const Card&);
 	int  get_rank();
 	int get_suit();
 	void set_rank(int );
 	void set_suit(int );
 	//string map_suit(int);
 	//string map_rank(int); //convert the int rank to corresponding string
    void print_card(); 


};
#endif
