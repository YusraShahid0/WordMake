#include "game.hpp"
using namespace std;

game::game() {};

// calling function of start screen
void game::start(sf::RenderWindow &window, int &start_screen_checker, int &level_checker, bool &back_button)
{
    // calling function of start screen with values passed by reference
    screen.run(window, start_screen_checker, level_checker, back_button);
}
