#include <LetterOptions.hpp>

LetterOptions::LetterOptions() : position(sf::Vector2f(0, 0)), data(""), char_size(0), color(sf::Color::Black)
{
    font.loadFromFile("fonts/arial.ttf");
}

// constructor
LetterOptions::LetterOptions(std::string font, sf::Vector2f position, std::string data, sf::Color color, int char_size) : position(position), data(data), color(color), char_size(char_size)
{
    this->font.loadFromFile("fonts/" + font + ".ttf");
    this->font.loadFromFile("fonts/" + font + ".ttf");
    this->position = position;
    this->data = data;
    this->color = color;
    this->char_size = char_size;
}

// draws the letters on the window
void LetterOptions::draw(sf::RenderWindow &window)
{
    sf::Text text;
    text.setFont(font);
    text.setFillColor(color);
    text.setString(data);
    text.setPosition(position);
    text.setCharacterSize(char_size);

    window.draw(text);
}