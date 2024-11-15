# include "card1.h"
/******************************************************
** Program: card1.cpp
** Author: Mary Nansikombi
** Date: 10/11/2022
** Description: Program on information of playing go fish game as players ask cards from one another.
** Input: Print to the cards to the screen and deals with telling players to check the deck or to steal from another player
** Output: Cards to the screen
************************/
/******************************************************* 
** Description: 1st function creates a parametersied constructor. second sets the cards to negative one (default constructor).The third is a copy constructor.
** Input: 1st funtion uses parameters of new rank new suit and makes them equal to itself.second uses copy constructor create anobject and copy it to itself.another make them equal to -1.
* *Output: New rank new suit,c.suit and c.rank
************************/
Card::Card (int new_rank, int new_suit){
this->rank = new_rank;
this->suit = new_suit;
}
Card::Card(){
	this->rank = -1;
	this->suit = -1;
}
Card::Card(const Card& C){
	this->rank = C.rank;
	this->suit = C.suit;
}

/*****************************************************
** Description: mutator and setter functions.
** Input: new rank new suit for the mutator functions
** Output: new rank and new suit result.
************************/

 

int Card::get_rank( ){
  return this->rank;
}
int Card::get_suit( ){
	return this->suit;
}
void Card::set_rank(int new_rank){
	this->rank = new_rank;
}
void Card::set_suit(int new_suit){
	this->suit = new_suit;
}

	/*****************************************************
** Description: Creation of an array that has ranks and suits.
************************/
	
 //convert the int rank to corresponding string
void Card::print_card( ){
	if (suit >-1 && rank >-1){
		string listofsuits[4]={"Diamonds","Clubs","Hearts", "Spades"};
		string listofranks[13]={"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};

    cout << listofranks[get_rank()] << " of " << listofsuits[get_suit()] << endl;
 } //cout << "Suit: " << this->suit << endl;
}


