CC=g++ -g
exe=goFish
$(exe): card1.o deck.o hand1.o player.o game.o driver1.cpp
	$(CC) card1.o deck.o hand1.o player.o game.o driver1.cpp  -o $(exe)

card1.o: card1.h card1.cpp
	$(CC) -c card1.cpp

deck.o: deck.h deck.cpp
	$(CC) -c deck.cpp

hand1.o: hand1.h hand1.cpp
	$(CC) -c hand1.cpp

player.o: player.h player.cpp
	$(CC) -c player.cpp

game.o: game.h game.cpp
	$(CC) -c game.cpp

clean:
	rm -f *.o $(exe)
