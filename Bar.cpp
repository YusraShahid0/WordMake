#include <Bar.hpp>


Bar::Bar() : length(0), pos(sf::Vector2f(0, 0)), horizontal(true) {}


Bar::Bar(int number_of_cells, sf::Vector2f pos, bool direction) : length(number_of_cells), pos(pos), horizontal(direction) {}

void Bar::set_length(int length)
{
    this->length = length;
}

void Bar::set_pos(sf::Vector2f pos)
{
    this->pos = pos;
}

void Bar::set_horizontal(bool horizontal)
{
    this->horizontal = horizontal;
}

void Bar::make(sf::RenderWindow &window)
{
    sf::Vector2f temp = pos;
    Cell cells[length];
    for (int i = 0; i < length; i++)
    {
        cells[i].set_pos(temp);
        cells[i].make(window);
        if (horizontal)
            temp = sf::Vector2f(temp.x + 85.f, temp.y);
        else
            temp = sf::Vector2f(temp.x, temp.y + 85.f);
    }
}

