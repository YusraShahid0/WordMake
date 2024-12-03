#include <SFML/Graphics.hpp>
#include <iostream>

// class to display the letters
class LetterOptions
{
private:
    sf::Font font;
    sf::Vector2f position;
    std::string data;
    sf::Color color;
    int char_size;

public:
    // default constructor
    LetterOptions();

    // constructor
    LetterOptions(std::string font, sf::Vector2f position, std::string data, sf::Color color, int char_size);

    // draws the letters on the window
    void draw(sf::RenderWindow &window);
};
