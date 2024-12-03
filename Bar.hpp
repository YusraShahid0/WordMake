#include <SFML/Graphics.hpp>
#include <iostream>
#include <Cell.hpp>

// class to make one bar of the grid
class Bar
{
private:
    int length;
    sf::Vector2f pos;
    bool horizontal;

public:
    // default constructor
    Bar();

    // constructor of the class
    Bar(int number_of_cells, sf::Vector2f pos, bool direction);

    // sets the bar length in terms of the number of cells
    void set_length(int length);

    // sets the position of the bar on the window
    void set_pos(sf::Vector2f pos);

    // sets the bool for if the bar is horizontal
    void set_horizontal(bool horizontal);

    // displays the bar on the window
    void make(sf::RenderWindow &window);

    
};