#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "start_screen.hpp"

class game
{
public:
    // default constructor
    game();

    // calling start screen object to instantiate the first screen of the game
    start_screen screen;

    // calling function of start screen
    void start(sf::RenderWindow &window, int &start_screen_checker, int &level_checker, bool &back_button);
};