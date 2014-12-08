// Copyright (c) 2013-2014 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifdef SFML_STATIC
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "freetype.lib")
#pragma comment(lib, "jpeg.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")  
#endif // SFML_STATIC


#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


using namespace std;
using namespace sf;

unsigned int windowWidth{ 800 }, windowHeigth{ 600 };
float ballRadius{ 10.f };

struct Ball {
	// CircleShape ist eine SFML Klasse die
	// renderbare Kreise definiert
	CircleShape shape;

	// Konstruktor
	Ball(float mX, float mY) {
		shape.setPosition(mX, mY);
		shape.setRadius(ballRadius);
		shape.setFillColor(Color::White);
		shape.setOrigin(ballRadius, ballRadius);
	}
};


int main() {
	// Instanz der Klasse Ball
	Ball ball{ float(windowWidth) / 2, float(windowHeigth) / 2 };

	// Erzeugung game window
	RenderWindow window{ { windowWidth, windowHeigth }, "Single Player Pong" };
	window.setFramerateLimit(60);

	while (true)
	{
		window.clear(Color::Black);

		if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) break;
		window.draw(ball.shape);
		window.display();
	}
}



