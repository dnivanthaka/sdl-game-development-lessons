CXX = g++

SDL_LIB = -L/usr/local/lib -lSDL2 -lSDL2_image -Wl,-rpath=/usr/local/lib
SDL_INCLUDE = -I/usr/local/include

CXXFLAGS = -Wall -c -std=c++0x $(SDL_INCLUDE)
LDFLAGS = $(SDL_LIB)
EXE = SDL_Chapter3

all: $(EXE)

$(EXE): main.o game.o texture_manager.o
	$(CXX) main.o game.o texture_manager.o $(LDFLAGS) -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

game.o: game.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

texture_manager.o: texture_manager.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.o && rm $(EXE)
