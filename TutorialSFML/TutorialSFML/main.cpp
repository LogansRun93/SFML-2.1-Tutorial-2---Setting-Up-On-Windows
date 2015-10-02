#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{

		sf::Event event;

		// Poll the window for events
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				// The window close button was clicked close the window	
				case sf::Event::Closed:
					window.close();
					break;

				// A key was pressed
				case sf::Event::KeyPressed:
					std::cout << "Key has been pressed" << std::endl;

					switch (event.key.code)
					{
						case sf::Keyboard::A:
							std::cout << "A" << std::endl;
							break;
					}
					break;
				// A key was released
				case sf::Event::KeyReleased:
					std::cout << "Key has been released" << std::endl;

					switch (event.key.code)
					{
						case sf::Keyboard::J:
							std::cout << "J has been released" << std::endl;
							break;
					}

					break;

			}
		}
		
		window.clear( );
		window.display( );
	}
}