#include <SFML/Graphics.hpp>
#include <iostream>
#include <UserWordInput.hpp>
#include <Grid.hpp>
#include <LetterOptions.hpp>

class level_button
{
public:
    sf::RectangleShape button;
    sf::Text button_text;
    sf::Vector2f position;
    sf::Vector2f size;
    sf::Color text_c;
    sf::Color button_c;

    level_button();

    level_button(sf::Vector2f s, sf::Color color, sf::Vector2f pos, string text, sf::Color text_color, sf::Font &font);

    void highlight(sf::RenderWindow &window, int &check);

    void level_click(sf::RenderWindow &window, int level_num, bool &back_button);

    void run(sf::RenderWindow &window, int &check);
};