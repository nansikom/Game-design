    #include "hand1.h"
    #include "deck.h"
    #include "player.h"
    /*****************************************************
     ** Description: craeting a player constructor.second one creates a default constructor.
    **************************/
    Player::Player( Hand hand, int* books, int n_books)
        {
            this->hand = hand;
            this->n_books = n_books;
            for (int i=0;i<n_books;i++)
        {
          this->books[i] = books[i];  
        }
    }

        
    //creating my damn constructor.
    Player::Player(){
        this->n_books =0;
        this->books =NULL;
    }
    int* Player::get_books( ){
       return this->books;
     }
     int Player::getn_books(){
      return this->n_books;
     }
     
    // decided to pass in a aplayer address.

    /*****************************************************
     ** Description: Card that is doing both the stealing and counting the number of matching cards.
    **************************/
     void  Player::get_matches(Player& P ,int rank){
        int n_matchingcard = hand.countcards(rank);
        //creating an array that will keep all the stolen cards in the player whom the cards have .
        Card * C =hand.steal_card(rank);

        for (int i=0;i<n_matchingcard;i++){
            //shiftinng to the opponents cards and placing them in the opponents hand.
            //cout<<C:<<*C[i] <<endl;
            cout<<"this player steals"<<endl;
            C[i].print_card();
            P.place_a_card(C[i]);

        }
        //return this->hand.steal_card(rank);
     }
     //ur giving the player a hand using pass ny referencer

    /*****************************************************
     ** Description: Returns a hand.
    **************************/
     Hand& Player::get_hand(){
       return this->hand;
     }
    //this is my copy constructor.
    Player::Player(const Player& C){
        //this->cards =C.cards;
        this->n_books =C.n_books;
        for (int i=0;i<n_books;i++)
        {
          this->books[i] = C.books[i];  
        }
    }
    //creating a destructor.
    //AOO
    // this is overiding the fully exixting 
    Player& Player::operator=(const Player& h){
        //member-wise copy
        this->n_books= h.n_books;
        

         if (this->books != NULL)
            delete [] this->books;

        //deep copy.which is going to a new card of index n_cards.
        this->books = new int [this->n_books];
        for (int i = 0; i < this->n_books; ++i)
        { 
            //this is where am creating the new card.
            this->books[i] = h.books[i];
        }

        return *this;

    }

    /*****************************************************
     ** Description: craeting a player destructor.kills object.
    **************************/
    Player::~Player(){
        if(this->books != NULL){
            delete[] this->books;
            this->books = NULL;
        }
    }

    /*****************************************************
     ** Description: calls add a card.
    **************************/
    void Player::place_a_card(Card& c){
        this->hand.add_card(c);
    }
    void Player::print_player_hand(){
        this->hand.print_Hand();
    }
    // you check ur hand.
    bool Player::call_check_player(int rank){

       return this->hand.hasRank(rank);

    }

    /*****************************************************
     ** Description: Giving out random cards.
    **************************/
     Card Player::randCard(){
       //return a random card from player's hand
       srand(time(NULL));
       int randInd = rand() % hand.getn_cards();
       Card randCard = hand.getcards()[randInd];
       return randCard;
      }

    /*****************************************************
         ** Description: removes books (matching cards).
    **************************/
     void Player::removeBook(int rankChosen){
       books[n_books] = rankChosen;
       n_books = n_books + 1;
       /* remove a card of rankChosen until there are no more left */
       while(hand.hasRank(rankChosen)){
         hand.removeCard(rankChosen);
       }
     }

    // //returns array of cards.

    // //gets the number of cards u may need this in the future.
    	


