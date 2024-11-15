   #include "hand1.h"
   # include "deck.h"
   # include  "card1.h"
   # include "player.h"
   # include "game.h"
   # include <time.h>
   # include <stdlib.h>
   # include <stdio.h>

   int main(){
      srand(time(NULL));
   	//Card d;
    //    Card t(9,1);
    //    Card e(t);
   	// t.print_card();
    //    e.print_card();
       
   	 //Deck D; 

      //  D.printDeck();
      //  D.shuffleDeck();
    //    D.printDeck();
     //   D.deal();
    //   D.printDeck();
    //    //U were calling ur default constructor.
       //Hand A;
       //Hand B;


     // A.add_card(c);
     // A.print_Hand();
     // B.print_Hand();
    //  A.deal();
     // A.print_Hand();
    // Hand a;
     // Deck& d = d;
     //a.give(&D);
    // a.print_Hand();
       
       Game g;
       Deck d1=g.get_deck();
       g.deal_card();
       
    while(d1.getn_cards()!= 0){
      //cout<<d1.getn_cards()<<endl;
       g.check(0);
       g.check(1);
       g.askcardplayer0();
       g.askcardplayer1();
    }
    while(d1.getn_cards()==0){
      cout<<"The go fish game is over please stop playing"<<endl;
    }





   // cout<<"welcome to our damn hard gofish game"<<endl;
   // int input;
   //  while(1)
   //  {
   //    cout<<"enter a card you would like to ask for"<<endl;
   //    cin>>input;
   //   // loop through the card in the other ones hands
   //   for(int i=0;i<n_cards;i++){
   //    if (input == B.this->cards[this->n_cards].get_rank)
   //        input =A.deal();
   //        input =A.add_card();
   //        A.print_Hand();
    }
   // }

   // }