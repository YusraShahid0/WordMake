#include "Cell.hpp"

Cell::Cell() : pos(sf::Vector2f(0, 0)){}


Cell::Cell(sf::Vector2f new_pos) : pos(new_pos) {}

void Cell::set_pos(sf::Vector2f pos)
{
    this->pos = pos;
}


void Cell::make(sf::RenderWindow &window)
{
    cell.setSize(sf::Vector2f(80, 80));
    cell.setFillColor(sf::Color::Black);
    cell.setOutlineThickness(5);
    cell.setOutlineColor(sf::Color(0, 115, 153));
    cell.setPosition(pos);

    window.draw(cell);
}