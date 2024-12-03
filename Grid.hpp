#include <SFML/Graphics.hpp>
#include <iostream>
#include <Bar.hpp>

// struct to store the information of bars
struct Bar_info
{
    bool horizontal;
    int number_of_cells;
    sf::Vector2f pos;
};


// class to make the whole grid of a level
class Grid
{
private:
    int no_of_bars;

public:
    // constructor of the class
    Grid(int no_of_bars);

    // displays the grid on the window
    void make(sf::RenderWindow &window, Bar_info bars_info[]);

};