all:
	g++ -I src/include -L src/lib -o bin/a.out src/main_test.cpp src/Game.cpp src/Renderer.cpp src/Character.cpp src/Man.cpp src/Men.cpp -lmingw32 -lSDL2main -lSDL2