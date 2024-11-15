CC=g++
EXE_FILE=pokemon_run

all: $(EXE_FILE)

$(EXE_FILE): pokemon.o pokemons.h run_pokemon1.cpp
	$(CC) pokemon.o run_pokemon1.cpp -o $(EXE_FILE)
 
pokemon.o: pokemons.h pokemon.cpp
	$(CC) -c pokemon.cpp
 
clean:
	rm -f *.o $(EXE_FILE)