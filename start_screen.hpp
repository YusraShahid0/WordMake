#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "level_button.hpp"
#include <iostream>

//start_screen uses composition with game class since they have a has-a relationship
class start_screen
{
public:
    void run(sf::RenderWindow &window, int &start_screen_checker, int &level_checker, bool &back_button);
};