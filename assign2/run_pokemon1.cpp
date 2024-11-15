
#include "pokemons.h"
#include <iostream>
# include <string>
#include <fstream>
using namespace std;

 int main()
{
   string str; 
   cout << "Welcome to your pokemon game trainer: \n"; 
   cout << "What's your name trainer?: \n"; //asking for trainer name
   cin >> str;
   cout << "Hello, " << str  << " how would you like to search for your favourite pokemon"<<endl;
   string filename;
   cout << "Enter the filename: ";
   cin >> filename;
   //opening both ifstream and ofstream files.
   ifstream fin;
   ofstream fin_out;
    fin_out.open("filenameTest", ios_base::app);
    if (!fin_out.is_open())
    {
        cout<<"error sorry"<< endl;
        return 1;
        fin_out.close();
    }

   fin.open (filename.c_str());
   
   // check if the file actually works.
   if (!fin.is_open())
   {
      cout<<"Error opening the file..."<< endl;
      return 1;
   }
   // this is an array of characters.
   string line = "";

   getline(fin,line);
   string stoi;
  int e =7;
  Pokedex pokedex;// u called pokedex  to make sure it exists in this scope since it is taking the place of struct. 
   pokedex.num_pokemon= e;
  pokedex.dex = create_pokemons(e);// your trying to reference back to the dex which is an array of pokemons the you set it to be equal to the pokemons so that it gives u the number of pokemons.

   populate_pokedex_data(pokedex,fin);// ur passing in the arguuments which are fin and pokedex
  
   int d =7;
   int moves =7;
   Pokemon pokemon;
   pokemon.dex_num;
   pokemon.name;
   pokemon.type;
   pokemon.num_moves;

  string option;
   cout<< "Would u like to write to the screen"<<endl;
   cout<< "Would  u like to the file"<<endl;
   cin>>option;
   if (option == "screen"){
   int input;
   cout << "Choose your search method your comfortable with:" << endl;
   
   while(1){
      //cout<<"enter your search method trainer:";
       cout<<"[1] search by dex_name"<<endl;
       cout<<"[2] search by dex_number"<<endl;
       cout<<"[3]search by the type"<<endl;
       cout<<"[4]I am quiting  hard pokemon game bye.\n";
      cin>> input;
      if (input==1){
         search_userdex_name (pokedex, d,fin_out);}
      else if (input==2){
            search_userdex_num(pokedex,d,fin_out); }
      else if (input== 3)
               {
                  search_user_type(pokedex,d,fin_out);}
      if (input== 4){
               //cout<< "I am quiting  hard pokemon game bye.\n";
               break;
            }
         } 
   }
      else if(option == "file"){
   cout << "Choose your search method your comfortable with:" << endl;
   //cout << "[1] search by dex_num" << endl << "[2] Search name" <<endl<< "[3] search by type"<<endl<< "[4] add new pokemon"<<endl<<"[5] quit game"<<endl;
   int input;
   while(1){
      //cout<<"enter your search method trainer:";
       cout<<"[1] search by dex_name output file"<<endl;
       cout<<"[2] search by dex_number output file"<<endl;
       cout<<"[3]search by the type output file"<<endl;
       cout<<"[4]I am quiting  hard pokemon game bye output file.\n";
      cin>> input;
      if (input==1){
         search_userdexname_outputfile (pokedex, d,fin_out);}
      else if (input==2){
            search_userdexnum_outputfile(pokedex,d,fin_out); }
      else if (input== 3)
               {
                  search_user_type_outputfile(pokedex,d,fin_out);}
      if (input== 4){
               //cout<< "I am quiting  hard pokemon game bye.\n";
               break;
            }
             }
          }
delete_info(pokedex);

 fin.close();
}
