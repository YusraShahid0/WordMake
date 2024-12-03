#include <SFML/Graphics.hpp>
#include <iostream>

// class to make one cell of the grid
class Cell
{
private:
    sf::RectangleShape cell;
    const sf::Vector2f size = sf::Vector2f(80, 80);
    sf::Vector2f pos;

public:
    // default constructor
    Cell();

    // constructor for the class
    Cell(sf::Vector2f new_pos);

    // fucntion to set the position of the cell
    void set_pos(sf::Vector2f pos);

    // displays the cell on the window
    void make(sf::RenderWindow &window);

};