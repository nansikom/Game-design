        #include "hand1.h"
        #include "deck.h"
        /*****************************************************
         ** Description: craeting a non default constructor and setting them to ) and NULL.
        ************************/
        Hand::Hand(){
            this->n_cards =0;
            this->cards =NULL;
        }
       /*****************************************************
         ** Description: craeting a copy constructor that craetes new object and sets it to itself
        ************************/
        Hand::Hand(const Hand & C){
            //this->cards =C.cards;
            this->n_cards =C.n_cards;
            for (int i=0;i<n_cards;i++)
            {
              this->cards[i] = C.cards[i];  
            }
        }
        /*****************************************************
         ** Description: craeting a parametised constructor .
        ************************/
        Hand::Hand(Card* card, int n_cards)
            {
                this->n_cards = n_cards;
                for (int i=0;i<n_cards;i++)
            {
              this->cards[i] = cards[i];  
            }
        }
        /*****************************************************
         ** Description: creating an Assignment overload operator that copies objects to the exiting object.
        ************************/
        Hand& Hand::operator=(const Hand& h){
            //member-wise copy
            this->n_cards= h.n_cards;
            

             if (this->cards != NULL)
                delete [] this->cards;

            //deep copy.which is going to a new card of index n_cards.
            this->cards = new Card [this->n_cards];
            for (int i = 0; i < this->n_cards; ++i)
            { 
                //this is where am creating the new card.
                this->cards[i] = h.cards[i];
            }

            return *this;

        }
        /*****************************************************
         ** Description: craeting a destructor that deletes objects.
        ************************/
        Hand::~Hand(){
            if(this->cards != NULL){
                delete[] this->cards;
                this->cards = NULL;
            }
        }
        /*****************************************************
         ** Description: Passing in a card to the Hand.
        ************************/
        Card* Hand::getcards(){
          return cards;
        }
        /*****************************************************
         ** Description: accesor function.
        ************************/
        int Hand::getn_cards(){
          return n_cards;
        }


        /*****************************************************
         ** Description: Function that adds card to the hand.
        ************************/
        void Hand::add_card(Card& c){
        //allocate a new array of a card objects with the size + 1.
        Card* new_arr= new Card [this->n_cards + 1];
        //copy all objects from the old array (cards) into the new array.
        for (int i =0;i< this->n_cards;i++)
        {
            new_arr[i] = this->cards[i];
        }
        //copying elements of n_cards to the new array.
        new_arr[this->n_cards] = c;
        if (this->cards != NULL)
            delete [] this->cards;
        //set cards array to the new array.
        this->cards = new_arr;
        //increment the n_cards
        this->n_cards++;
        }
         Card Hand::checkplayer(int input){
            cout<<"welcome to the damn hard go fish game"<<endl;
             cout<<"what card would you like to ask for"<<endl;
             //int input;
            // cin>>input;
            for(int i=0;i<n_cards;i++){
            
             if(input ==cards[i].get_rank())
                cards[i].print_card();
                Card same_card =cards[i];
                return same_card;
            }
              
        }
        /*****************************************************
         ** Description: Passing in a Deck to the Hand.
        ************************/
          void Hand::give(Deck* d){
          this->n_cards = 7;
          this->cards = new Card[7];
          for (int i = 0; i < 7; i++){
            this->cards[i] = d->deal();
            //cout<<cards;[i]<<endl;
          }
        }
        /*****************************************************
         ** Description: Checking for a specific rank if it is there.
        ************************/
        bool Hand::hasRank(int rank){
          for(int i = 0; i < n_cards; i++){
            if(cards[i].get_rank() == rank){
              return true;
            }
          }
          return false;
        }
        /*****************************************************
         ** Description: Function that checks for book.
        ************************/
        bool Hand::checkBook(int rank){
          //check for full book of rank in hand
          int count = 0;
          for(int i = 0; i < n_cards; i++){
            if(cards[i].get_rank() == rank){
              count++;
            }
          }
          if(count > 3){
            return true;
          }
          return false;
        }
         /*****************************************************
         ** Description: craeting a remove card function.
        ************************/
         Card Hand::removeCard(int rank){
           Card removed;
           int cardPos = -1;
           for(int i = 0; i < n_cards; i++){
             if(cards[i].get_rank() == rank){
               cardPos = i;
             }
           }
        //   /* store card of given rank */
           removed = cards[cardPos];
        //   /* set rank and suit such that the sort will put card at the end */
           cards[cardPos].set_rank(52);
           cards[cardPos].set_suit(52);
          // sort(cards, cards + n_cards);
           this->n_cards = this->n_cards - 1;

           return removed;
         }
         /*****************************************************
         ** Description: Fuunction that counts the number of matching cards.
        ************************/
        int Hand::countcards(int rank){
            int count=0;
            // if(this->hasRank(rank)== false){
            //     return NULL;
            //}
            for (int i =0; i< this->n_cards;++i){
               if(this->cards[i].get_rank()==rank)
                count++;

        } 
        return count;
        }
        /*****************************************************
         ** Description: Function that steals cards from the oppon.
        ************************/
        
        Card* Hand::steal_card(int rank){
            //Card* temp = new Card[this->n_cards -1];
            int count=0;
            if(this->hasRank(rank)== false){
                //cout<<"This count is false"<<endl;
                return NULL;
            }
            for (int i =0; i< this->n_cards;++i){
               if(this->cards[i].get_rank()==rank)
                count++;
            }
        //we are in the art museum and have created 2 arrays of diamonds but we jst want to take away our diamonds that actually matched and put them in our bag.) 
            Card* tempnonmatches = new Card[this->n_cards -count];
            Card* tempmatches = new Card[count];


                            
           //creating new indices.
           int indexnonmatches=0;
           int indexmatches=0;

           //loop through the cards array and start copying elements into each other.
           for(int i=0;i<n_cards;++i){
           // cards[i].print_card();
            if(this->cards[i].get_rank()==rank){
                //we are trying to put all cards that match that rank

        
               tempmatches[indexmatches] = this->cards[i];

                

               indexmatches++;
               }  
            else{
                // copying non matches index to cards array.
            

                tempnonmatches[indexnonmatches]= this->cards[i];
                

                indexnonmatches++;

            
            }
           


             


            
           }
            this->cards= tempnonmatches; 
            this->n_cards = this->n_cards-count;
            return tempmatches;
            //delete [] this->cards;

            


        }
    // prints the hand 
        void Hand::print_Hand(){
        for(int i = 0; i < this->n_cards; i++){
           this->cards[i].print_card();
          }
          }
