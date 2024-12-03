#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <game.hpp>
using namespace std;

// main function calling the game class which starts of the application
int main()
{
    // Create a window of size 400x300
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Welcome to WordMake!");

    // checks whether the start screen should be displayed
    int start_screen_checker = 0;
    // checks which level the user has pressed, switching from main menu screen to level screen
    int level_checker = 0;
    // checks whether user has pressed the back button option on the level screen
    bool back_button_check = false;
    while (window.isOpen())
    {
        // Event processing
        sf::Event event;
        while (window.pollEvent(event))
        {

            // Close the window when close button or Escape key is pressed
            if (event.type == sf::Event::Closed ||
                (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Delete))
            {
                std::cout << "Closed the window";
                window.close();
            }
        }

        game WordMake;
        // calling game object function with window and checkers all passed by reference so the changes made to them are saved
        WordMake.start(window, start_screen_checker, level_checker, back_button_check);
    }
    return 0;
}