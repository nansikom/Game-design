	#include "game.h"	

	Game::Game(){
		this->d.shuffleDeck();
		this->d.deal();
		this->players[0].print_player_hand();
		this->players[1].print_player_hand();
	}
	void Game::deal_card(){
		
		for (int i = 0; i < 14; ++i)
		{
			Card c = this->d.deal();

			
			this->players[i%2].place_a_card(c);
		}
		
	}
	Deck Game::get_deck(){
	    return this->d;
}
	
	void Game::check(int index){
		cout<<"Player at index: "<< index << endl;
		players[index].print_player_hand();
	}/*****************************************************
     ** Description: my ask player cards function that calls all the needed functions 
     ** Input: call has rank checks the rank steal cards 
     ** Output: nplaces the stolen cards in the one who asked for them else draws cards from the deck
    ************************/
	void Game::askcardplayer0(){
		cout<<"welcome to gofish game please play bright my dear human."<<endl;
		 int rank;
		while(1){
			while(true){
			   //players[0].print_player_hand();
			  // players[1].print_player_hand();
			   cout<<"enter for a rank u wish to ask for dear human"<<endl;
				cin>>rank;
				rank--;
				if(this->players[0].call_check_player(rank)== true){
			      break;
				}
				else {
					cout<<"Pick another card from your hand please"<<endl;
				}
			}

			

				
			
    
			if(players[1].call_check_player(rank)==true){
				cout<<"lucky you take another chance"<<endl;

				players[1].get_matches(players[0],rank);
				cout<<"Player at index: "<< 0 << endl;
				players[0].print_player_hand();
				//cout<<"Player at index: "<< 1<< endl;

				//players[1].print_player_hand();

				//players[1].get_matches(players[0],rank).print_player_hand();
				
			
				}
			 
			else  {
				cout<<"go fish human better luck next time u idiot"<<endl;
				Card M= d.deal();
			    players[0].place_a_card(M);
			   // cout<<"go fish human"<<endl;
			   cout<<"Player at index: "<< 0 << endl;

			   players[0].print_player_hand();
			  // cout<<"Player at index: "<< 1 << endl;
              // players[1].print_player_hand();
			   

			   //players[0].place_a_card(M).print_player_hand();
			   break;
              
			   
			   

			   
			   
			    
			}
		}
	}/*****************************************************
     ** Description: my ask player cards function that calls all the needed functions 
     ** Input: call has rank checks the rank steal cards 
     ** Output: nplaces the stolen cards in the one who asked for them else draws cards from the deck
    ************************/

		void Game::askcardplayer1(){
		int rank;
		while(2){
			while(true){
				//players[0].print_player_hand();
				//players[1].print_player_hand();
				cout<<"enter for a rank u wish to ask for dear computer"<<endl;
				cin>>rank;
				rank--;
				if(this->players[1].call_check_player(rank)== true){
			        break;
			  	}
				
				else{
					cout<<"Be bright and pick another card please computer"<<endl;
				}
			}
			
				
				
			
    
			if(players[0].call_check_player(rank)==true){
				cout<<"Take another turn bright computer"<<endl;
				players[0].get_matches(players[1],rank);
				cout<<"Player at index: "<<  1<< endl;

				players[1].print_player_hand();
				//cout<<"Player at index: "<< 0 << endl;

				//players[0].print_player_hand();
							

			}
		
			   
			else{
				cout<<"go fish computer"<<endl;
			    Card R= d.deal();
			    players[1].place_a_card(R);
			    cout<<"Player at index: "<< 1 << endl;

			    players[1].print_player_hand();
			    //cout<<"Player at index: "<< 0 << endl;

			    //players[0].print_player_hand();
			    break;

			  
			   
			  
			    

			    
			    
			}
		}
	}



		

