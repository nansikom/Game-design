/******************************************************
** Program: pokemon.cpp
** Author: Mary Nansikombi
** Date: 10/25/2022
** Description: Pokemon Program  for users to find Pokemon information either by search by type, dex_num, name or adding a new Pokemon
** Input: outputs the file to the screen.
** Output: Outputs the file into a file
******************************************************/

#ifndef POKEMONS_H
#define POKEMONS_H

#include<string>
// Declare ifstream
#include<fstream>
#include <iostream>
using namespace std;

struct Pokemon {
   int dex_num;
   string name;
   string type;
   int num_moves;
   string* moves;
};
struct Pokedex {
   string trainer;
   int num_pokemon;
   Pokemon* dex;
   };

Pokemon *create_pokemons(int);
string *create_moves(int);
void populate_pokemon(Pokemon & , ifstream & );
void populate_pokedex_data(Pokedex & , ifstream &);
void search_userdex_name(Pokedex & , int  ,ofstream & );
void search_userdex_num(Pokedex & , int num_pokemon ,ofstream & );
void search_user_type(Pokedex & , int  ,ofstream & );
void search_user_type_outputfile(Pokedex & , int  ,ofstream & );
void search_userdexname_outputfile(Pokedex & , int  ,ofstream & );
void search_userdexnum_outputfile(Pokedex & , int  ,ofstream & );
void delete_info(Pokedex &);

#endif