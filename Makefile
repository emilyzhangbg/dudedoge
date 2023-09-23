all:
	g++ -I src/include -L src/lib -o bin/a.out src/main.cpp src/Game.cpp src/Renderer.cpp -lmingw32 -lSDL2main -lSDL2