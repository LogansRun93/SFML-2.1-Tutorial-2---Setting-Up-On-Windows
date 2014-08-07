#include "SFML/Graphics.hpp"

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{
		window.clear( );

		window.display( );
	}
}