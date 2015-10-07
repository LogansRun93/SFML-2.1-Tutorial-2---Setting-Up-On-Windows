#include "SFML/Graphics.hpp"
#include <iostream>
using namespace std;
using namespace sf;


int main()
{
	RenderWindow window( VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{

		Event event;

		// Poll the window for events
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				// The window close button was clicked close the window	
				case Event::Closed:
					window.close();
					break;

				// Window was resized
				case Event::Resized:
					cout << event.size.width <<  ":" << event.size.height << endl;
					break;

				// Window lost focus
				case Event::LostFocus:
					cout << "Lost focus" << endl;
					break;

				// Window gain focus
				case Event::GainedFocus:
					cout << "Gained focus" << endl;
					break;

				// Mouse button was pressed
				case Event::MouseButtonPressed:
					cout << "Mouse button has been pressed" << endl;

					switch (event.key.code)
					{
						case Mouse::Left:
							cout << "Left key has been pressed" << endl;
							break;
					}

					break;

				// Mouse button was released
				case Event::MouseButtonReleased:
					cout << "Mouse button was released" << endl;

					switch (event.key.code)
					{
						case Mouse::Right:
							cout << "Right key has been released" << endl;
							break;
					}

					break;

				// Mouse wheel was moved
				case Event::MouseWheelMoved:
					cout << "Mouse wheel was moved" << endl;

					cout << event.mouseWheel.delta << endl;

					break;

				// Mouse was moved
				case Event::MouseMoved:
					cout << "Mouse was moved" << endl;
					cout << event.mouseMove.y << endl;
					break;

				// Mouse entered window
				case Event::MouseEntered:
					cout << "Mouse has entered the window" << endl;
					break;

				// Mouse exited window
				case Event::MouseLeft:
					cout << "Mouse has left the window" << endl;
					break;


				// A key was pressed
				case Event::KeyPressed:
					cout << "Key has been pressed" << endl;

					switch (event.key.code)
					{
						case Keyboard::A:
							cout << "A" << endl;
							break;
					}
					break;
				// A key was released
				case Event::KeyReleased:
					cout << "Key has been released" << endl;

					switch (event.key.code)
					{
						case Keyboard::J:
							cout << "J has been released" << endl;
							break;
					}

					break;

				// Joystick connected
				case Event::JoystickConnected:
					cout << "Joystick was connected" << endl;
					break;

				// Joystick disconnected
				case Event::JoystickDisconnected:
					cout << "Joystick was disconnected" << endl;
					break;

				// Joystick button pressed
				case Event::JoystickButtonPressed:
					cout << "Joystick button has been pressed" << endl;
					break;

				// Joystick button released
				case Event::JoystickButtonReleased:
					cout << "Joystick button released" << endl;
					break;

				// Joysitck moved
				case Event::JoystickMoved:
					cout << event.joystickMove.position << endl;
					break;

			}
		}
		
		window.clear( );
		window.display( );
	}
}