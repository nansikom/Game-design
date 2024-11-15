/******************************************************
** Program: pokemon.cpp
** Author: Mary Nansikombi
** Date: 10/23/2022
** Description: Program for users to find Pokemon information either by search by type, dex_num, name or adding a new Pokemon
** Input: Print to the screen as you search for Pokemon
** Output: Pokemon output to the file
******************************************************/
#include "pokemons.h"

// mary u are creating an array of empty pokemons not  yet filled
Pokemon *create_pokemons(int d){
   Pokemon *heap_array = new Pokemon [d];
   return heap_array;
}
string *create_moves(int d){
   string *heap_array = new string [d];
   return heap_array;
}
// this assignment.
// here u are returning the pointer to the array.
// this is my second function that is //below data stands for pokedex struct.
// I need to fill in all the information here and also create an array here.
void populate_pokemon(Pokemon & p, ifstream & fin){
// need to create a for loop to pass through the number of pokemons and I want it to return the number of pokemons
   fin>>p.dex_num;
   fin>>p.name;
   fin>>p.type;
   fin>>p.num_moves;
   //string moves;
   //p.moves = new string moves[d];
    // fin>>num_moves;
     p.moves = create_moves(p.num_moves);
     for (int i=0;i<p.num_moves;++i){
         fin>>p.moves[i];
         //create_moves(p.moves,fin);
         //return num_moves;
        // {jst trying to test it out.
           // cout<<p.moves[i]<<endl;
      }
  }



//cout<<p.dex_num<<endl;
//}

void populate_pokedex_data(Pokedex & data , ifstream & fin){
   //int d;
  // int num_pokemon;
  // fin>>data.num_pokemon;
  // data.dex = create_pokemons(num_pokemon);// your trying to reference back to the dex which is an array of pokemons the you set it to be equal to the pokemons so that it gives u the number of pokemons.
   // it is trying to iterate through 
   for(int i=0; i<data.num_pokemon;++i){
      populate_pokemon(data.dex[i], fin);
      //{
      //cout<< data.num_pokemon<< " ";
   //}
   }

}
 //cout<<endl;
//}
 void search_userdex_name(Pokedex & p, int num_pokemon ,ofstream & fin_output)
  {
   string request;
   cout<<"search by dex_name"<< endl;
   cin>> request;
  for(int i =0; i < num_pokemon; i++){
      if(p.dex[i].name == request){

         cout<<p.dex[i].dex_num<<" "<<p.dex[i].name<<" "<<p.dex[i].type<< " "<<p.dex[i].num_moves<< " " << endl ;
         for (int j =0; j< p.dex[i].num_moves; j++){
            cout<<p.dex[i].moves[j]<< " "<<endl;
            
         }
         return;

      }
   }
  

 
   cout<<"sorry trainer your pokemon does not exixst"<<endl;


}

void search_userdex_num(Pokedex & p, int num_pokemon ,ofstream & fin_output)
  {
   int request;
   cout<<"search by dex_num"<< endl;
   cin>> request;
  for(int i =0; i < num_pokemon; i++){
   if(p.dex[i].dex_num == request){
   cout<<p.dex[i].dex_num<<" "<<p.dex[i].name<<" "<<p.dex[i].type<< " ";
  
  for (int j =0; j< p.dex[i].num_moves; j++){
   //cout<<p.dex[j].moves<< " "<<endl;
   cout<<p.dex[i].moves[j]<<" "<<endl;
}
return;
}
}

 //if (p.dex[i].dex_num != request){
   cout<<"sorry trainer your pokemon does not exixst"<<endl;
//}

}
void search_user_type(Pokedex & p, int num_pokemon ,ofstream & fin_output)
  {
   string request;
   cout<<"search by user type"<< endl;
   cin>> request;
  for(int i =0; i < p.num_pokemon; i++){
   if(p.dex[i].type == request){
   cout<<p.dex[i].dex_num<<" "<<p.dex[i].name<<" "<<p.dex[i].type<< " ";
  
  for (int j =0; j< p.dex[i].num_moves; j++){
   //cout<<p.dex[j].moves<< " "<<endl;
   cout<<p.dex[i].moves[j]<<" "<<endl;
}
return;
}
}

 //if (p.dex[i].dex_num != request){
   cout<<"sorry trainer your pokemon does not exixst"<<endl;
//}

}
void search_user_type_outputfile(Pokedex & p, int num_pokemon ,ofstream & fin_output)
{
   string request;
   cout<<"search by user type"<< endl;
   cin>> request;
   bool pokemon = false;
  for(int i =0; i < p.num_pokemon; i++){
      if(p.dex[i].type == request){
         pokemon = true;
         fin_output<<p.dex[i].dex_num<<" "<<p.dex[i].name<<" "<<p.dex[i].type<< " ";
     
        for (int j =0; j < p.dex[i].num_moves; j++){
            fin_output<<p.dex[i].moves[j]<<" "<<endl;
         }
      }
   }

      if(pokemon == false){
   fin_output<<"sorry trainer your pokemon does not exixst"<<endl;
}
}
void search_userdexname_outputfile(Pokedex & p, int num_pokemon ,ofstream & fin_output)
{
   string request;
   cout<<"search by user type"<< endl;
   cin>> request;
   bool pokemon = false;
  for(int i =0; i < p.num_pokemon; i++){
      if(p.dex[i].name == request){
         pokemon = true;
         fin_output<<p.dex[i].dex_num<<" "<<p.dex[i].name<<" "<<p.dex[i].type<< " ";
     
        for (int j =0; j < p.dex[i].num_moves; j++){
            fin_output<<p.dex[i].moves[j]<<" "<<endl;
         }
      }
   }

      if(pokemon == false){
   fin_output<<"sorry trainer your pokemon does not exixst"<<endl;
}
}
void search_userdexnum_outputfile(Pokedex & p, int num_pokemon ,ofstream & fin_output)
{
   int request;
   cout<<"search by user type"<< endl;
   cin>> request;
   bool pokemon = false;
  for(int i =0; i < p.num_pokemon; i++){
      if(p.dex[i].dex_num == request){
         pokemon = true;
         fin_output<<p.dex[i].dex_num<<" "<<p.dex[i].name<<" "<<p.dex[i].type<< " ";
     
        for (int j =0; j < p.dex[i].num_moves; j++){
            fin_output<<p.dex[i].moves[j]<<" "<<endl;
         }
      }
   }

      if(pokemon == false){
   fin_output<<"sorry trainer your pokemon does not exixst"<<endl;
}
}
//delete function of array of moves and array of array  
void delete_info(Pokedex & data){
  // data.dex = create_pokemons(d);
   for (int i = 0; i < data.num_pokemon; ++i)
   {
      delete[] data.dex[i].moves;
   }

   delete[] data.dex;
} 

 
// int main()
// {
//    string str; 
//    cout << "Welcome to your pokemon game trainer: \n"; 
//    cout << "What's your name trainer?: \n"; //asking for trainer name
//    cin >> str;
//    cout << "Hello, " << str  << " how would you like to search for your favourite pokemon"<<endl;
//    string filename;
//    cout << "Enter the filename: ";
//    cin >> filename;
//    //opening both ifstream and ofstream files.
//    ifstream fin;
//    ofstream fin_out;
//     fin_out.open("filenameTest", ios_base::app);
//     if (!fin_out.is_open())
//     {
//         cout<<"error sorry"<< endl;
//         return 1;
//         fin_out.close();
//     }

//    fin.open (filename.c_str());
   
//    // check if the file actually works.
//    if (!fin.is_open())
//    {
//       cout<<"Error opening the file..."<< endl;
//       return 1;
//    }
//    // this is an array of characters.
//    string line = "";

//    getline(fin,line);
//    string stoi;
//   int e =7;
//   Pokedex pokedex;// u called pokedex  to make sure it exists in this scope since it is taking the place of struct. 
//    pokedex.num_pokemon= e;
//   pokedex.dex = create_pokemons(e);// your trying to reference back to the dex which is an array of pokemons the you set it to be equal to the pokemons so that it gives u the number of pokemons.

//    populate_pokedex_data(pokedex,fin);// ur passing in the arguuments which are fin and pokedex
  
//    int d =7;
//    int moves =7;
//    Pokemon pokemon;
//    pokemon.dex_num;
//    pokemon.name;
//    pokemon.type;
//    pokemon.num_moves;

//   string option;
//    cout<< "Would u like to write to the screen"<<endl;
//    cout<< "Would  u like to the file"<<endl;
//    cin>>option;
//    if (option == "screen"){
//    int input;
//    cout << "Choose your search method your comfortable with:" << endl;
   
//    while(1){
//       //cout<<"enter your search method trainer:";
//        cout<<"[1] search by dex_name"<<endl;
//        cout<<"[2] search by dex_number"<<endl;
//        cout<<"[3]search by the type"<<endl;
//        cout<<"[4]I am quiting  hard pokemon game bye.\n";
//       cin>> input;
//       if (input==1){
//          search_userdex_name (pokedex, d,fin_out);}
//       else if (input==2){
//             search_userdex_num(pokedex,d,fin_out); }
//       else if (input== 3)
//                {
//                   search_user_type(pokedex,d,fin_out);}
//       if (input== 4){
//                //cout<< "I am quiting  hard pokemon game bye.\n";
//                break;
//             }
//          } 
//    }
//       else if(option == "file"){
//    cout << "Choose your search method your comfortable with:" << endl;
//    //cout << "[1] search by dex_num" << endl << "[2] Search name" <<endl<< "[3] search by type"<<endl<< "[4] add new pokemon"<<endl<<"[5] quit game"<<endl;
//    int input;
//    while(1){
//       //cout<<"enter your search method trainer:";
//        cout<<"[1] search by dex_name output file"<<endl;
//        cout<<"[2] search by dex_number output file"<<endl;
//        cout<<"[3]search by the type output file"<<endl;
//        cout<<"[4]I am quiting  hard pokemon game bye output file.\n";
//       cin>> input;
//       if (input==1){
//          search_userdexname_outputfile (pokedex, d,fin_out);}
//       else if (input==2){
//             search_userdexnum_outputfile(pokedex,d,fin_out); }
//       else if (input== 3)
//                {
//                   search_user_type_outputfile(pokedex,d,fin_out);}
//       if (input== 4){
//                //cout<< "I am quiting  hard pokemon game bye.\n";
//                break;
//             }
//              }
//           }
// delete_info(pokedex);

//  fin.close();
// }
