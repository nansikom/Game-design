## Go Fish Game 

This project implements the classic card game Go Fish with object-oriented programming. The game follows a two-player setup (human vs. computer), featuring file-separated classes for modularity and clear game flow.

## Features
Classes: The program includes the required classes:

Card
Deck
Hand
Player
Game Additional classes or structs may be included as needed.
## Big Three and Const Usage

Implemented the "Big Three" (destructor, copy constructor, and assignment operator) for necessary classes (Hand and Player).
Proper use of const for accessor functions.
## Accessor and Mutator Functions

Private member variables are accessed via accessor and mutator functions, ensuring encapsulation.
## Game Setup

Initializes a deck of 52 cards and two players with empty hands.
Shuffles the deck in the Game class.
Deals seven cards to each player.
Runs in debug mode if specified.
## Game Turn Mechanics

Human Turn: Prompts the user for a rank and checks if they have at least one card of that rank.
Computer Turn: Randomly selects a rank to ask for (or choose smarter logic for extra credit).
Card Transfers: Correctly transfers cards between players when ranks match.
Go Fish: Draws a card from the deck when no match is found.
Books: Checks and removes books (four cards of the same rank) from hands.
## Game Flow

Alternates turns between players.
Determines the game’s end and the winner based on the number of books.
Allows replaying until the user opts to quit.
## Program Style

Includes headers with author information, function names, descriptions, and consistent indentation.
Uses in-line comments for code clarity.
Auto-Deductions
Avoids the use of:

Global variables.
goto statements.
Restricted libraries (<vector> and <algorithm>).
Excessively long functions without justification.
Memory leaks and runtime errors.
Extra Credit
A smarter computer player that chooses ranks based on strategy rather than random selection.

Running the Program
Ensure all files are in the same directory.
Compile using:
bash
Copy code
g++ -o gofish *.cpp
Run the program:
bash
Copy code
./gofish
Follow on-screen prompts to play the game.
Note : Assignment was hosted by Oregonstate university 
