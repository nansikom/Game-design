## Pokémon Pokedex Program

This program implements a Pokémon Pokedex, allowing users to interact with Pokémon data using file I/O, dynamic arrays, and structs.

## Features

File I/O Operations

## Prompts for an input file name.
Exits gracefully with an error message if the file cannot be opened. 
Opens the file and reads Pokémon data.
Allows specifying an output file for results, appending if the file exists or creating a new file if it doesn't.

## Search Functionalities
Search by Dex Number: Finds a Pokémon by its Dex number, outputs results, or displays an error if none match.
Search by Name: Finds a Pokémon by its name, outputs results, or displays an error if none match.
Search by Type: Finds all Pokémon matching a type, outputs results, or displays an error if none match.
Program Flow

Quit: Exits the program when the user chooses.
Do-again: Allows repeated operations until exit.
Struct Usage and Required Functions

Uses dynamic arrays to store Pokémon data.
Implements Pokedex and Pokemon structs with required functions.

## Running Instructions

Place all files in the same directory.
Compile with:
bash
Copy code
g++ -o pokedex *.cpp
## Run the program:
bash
Copy code
./pokedex
Note: Assignment was hosted by Oregon state university
