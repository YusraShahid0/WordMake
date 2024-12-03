#include <level_button.hpp>
using namespace std;

level_button::level_button() {};
level_button::level_button(sf::Vector2f s, sf::Color color, sf::Vector2f pos, string text, sf::Color text_color, sf::Font &font)
{
    position = pos;
    text_c = text_color;
    button_c = color;
    size = s;
    int text_size = size.x / 4;
    button.setSize(size);
    button.setPosition(pos);
    button.setFillColor(color);
    button.setOutlineColor(sf::Color::Black);
    button.setOutlineThickness(10);
    float xPos = (pos.x + size.x / 5);
    float yPos = (pos.y + size.y / 3);
    button_text.setFont(font);
    button_text.setPosition(xPos, yPos);
    button_text.setString(text);
    button_text.setFillColor(text_color);
    button_text.setCharacterSize(text_size);
    button_text.setOutlineColor(sf::Color::Black);
    button_text.setOutlineThickness(5);
}


void level_button::highlight(sf::RenderWindow &window, int &check)
{
    float x_end = position.x + size.x;
    float y_end = position.y + size.y;

    if (check == 0 && ((sf::Mouse::getPosition().x > position.x && sf::Mouse::getPosition().x < x_end) && (sf::Mouse::getPosition().y > position.y + 35.f && sf::Mouse::getPosition().y < y_end + 35.f)))
    {
        button.setFillColor(text_c);
        button_text.setFillColor(button_c);
        window.draw(button);
        window.draw(button_text);
    }
}

void level_button::level_click(sf::RenderWindow &window, int level_num, bool &back_button)
{
    float x_end = position.x + size.x;
    float y_end = position.y + size.y;

    // when the user has selected a level

    if (level_num == 1)
    {
        window.clear();
        Grid grid(5);

        Bar_info bars_info[5];

        bars_info[0].horizontal = true;
        bars_info[0].number_of_cells = 3;
        bars_info[0].pos = sf::Vector2f(200, 400); // NOT

        bars_info[1].horizontal = false;
        bars_info[1].number_of_cells = 3;
        bars_info[1].pos = sf::Vector2f(200 + (85 * 2), 400); // TON

        bars_info[2].horizontal = false;
        bars_info[2].number_of_cells = 3;
        bars_info[2].pos = sf::Vector2f(200, 400); // NUT

        bars_info[3].horizontal = true;
        bars_info[3].number_of_cells = 3;
        bars_info[3].pos = sf::Vector2f(200 + (85 * 2), 400 + (85 * 1)); // OUT

        bars_info[4].horizontal = false;
        bars_info[4].number_of_cells = 4;
        bars_info[4].pos = sf::Vector2f(200 + (85 * 4), 400 - (85 * 1)); // UNTO

        grid.make(window, bars_info);

        LetterOptions options("arialbd", sf::Vector2f(950, 150), "T N O U", sf::Color(204, 102, 153), 150);
        options.draw(window);

        UserWordInput in;
        in.input(window, "arialbd", 1, back_button);
    }

    if (level_num == 2)
    {
        window.clear();
        Grid grid(8);

        Bar_info bars_info[8];

        bars_info[0].horizontal = true;
        bars_info[0].number_of_cells = 3;
        bars_info[0].pos = sf::Vector2f(50, 400); // EAT

        bars_info[1].horizontal = false;
        bars_info[1].number_of_cells = 3;
        bars_info[1].pos = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2)); // BAT

        bars_info[2].horizontal = true;
        bars_info[2].number_of_cells = 4;
        bars_info[2].pos = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2)); // BETA

        bars_info[3].horizontal = false;
        bars_info[3].number_of_cells = 3;
        bars_info[3].pos = sf::Vector2f(50 + (85 * 4), 400 - (85 * 2)); // TAB

        bars_info[4].horizontal = true;
        bars_info[4].number_of_cells = 3;
        bars_info[4].pos = sf::Vector2f(50 + (85 * 4), 400); // BET

        bars_info[5].horizontal = false;
        bars_info[5].number_of_cells = 3;
        bars_info[5].pos = sf::Vector2f(50 + (85 * 6), 400); // TEA

        bars_info[6].horizontal = false;
        bars_info[6].number_of_cells = 3;
        bars_info[6].pos = sf::Vector2f(50 + (85 * 1), 400); // ATE

        bars_info[7].horizontal = true;
        bars_info[7].number_of_cells = 4;
        bars_info[7].pos = sf::Vector2f(50, 400 + (85 * 2)); // BEAT

        grid.make(window, bars_info);

        LetterOptions options("arialbd", sf::Vector2f(950, 150), "B T A E I", sf::Color(204, 102, 153), 150);
        options.draw(window);

        UserWordInput in;
        in.input(window, "arialbd", 2, back_button);
    }

    if (level_num == 3)
    {
        window.clear();
        Grid grid(6);

        Bar_info bars_info[6];

        bars_info[0].horizontal = true;
        bars_info[0].number_of_cells = 8;
        bars_info[0].pos = sf::Vector2f(50, 400); // APPEASED

        bars_info[1].horizontal = false;
        bars_info[1].number_of_cells = 4;
        bars_info[1].pos = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2)); // SAPS

        bars_info[2].horizontal = false;
        bars_info[2].number_of_cells = 4;
        bars_info[2].pos = sf::Vector2f(50 + (85 * 4), 400); // AIDE

        bars_info[3].horizontal = false;
        bars_info[3].number_of_cells = 3;
        bars_info[3].pos = sf::Vector2f(50 + (85 * 6), 400 - (85 * 1)); // SEA

        bars_info[4].horizontal = true;
        bars_info[4].number_of_cells = 3;
        bars_info[4].pos = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2)); // SIP

        bars_info[5].horizontal = true;
        bars_info[5].number_of_cells = 6;
        bars_info[5].pos = sf::Vector2f(50, 400 + (85 * 3)); // SIPPED
        grid.make(window, bars_info);

        LetterOptions options("arialbd", sf::Vector2f(950, 150), "D S I A P E", sf::Color(204, 102, 153), 150);
        options.draw(window);

        UserWordInput in;
        in.input(window, "arialbd", 3, back_button);
    }

    if (level_num == 4)
    {
        window.clear();
        Grid grid(6);

        Bar_info bars_info[6];

        bars_info[0].horizontal = true;
        bars_info[0].number_of_cells = 6;
        bars_info[0].pos = sf::Vector2f(200, 400);

        bars_info[1].horizontal = false;
        bars_info[1].number_of_cells = 4;
        bars_info[1].pos = sf::Vector2f(200 + (85 * 1), 400 - (85 * 3));

        bars_info[2].horizontal = false;
        bars_info[2].number_of_cells = 4;
        bars_info[2].pos = sf::Vector2f(200 + (85 * 3), 400);

        bars_info[3].horizontal = false;
        bars_info[3].number_of_cells = 3;
        bars_info[3].pos = sf::Vector2f(200 + (85 * 5), 400 - (85 * 1));

        bars_info[4].horizontal = true;
        bars_info[4].number_of_cells = 3;
        bars_info[4].pos = sf::Vector2f(200 + (85 * 1), 400 - (85 * 3));

        bars_info[5].horizontal = true;
        bars_info[5].number_of_cells = 7;
        bars_info[5].pos = sf::Vector2f(30, 400 + (85 * 3));
        grid.make(window, bars_info);

        LetterOptions options("arialbd", sf::Vector2f(950, 150), "D A S E N T I", sf::Color(204, 102, 153), 150);
        options.draw(window);

        UserWordInput in;
        in.input(window, "arialbd", level_num, back_button);
    }

    if (level_num == 5)
    {
        window.clear();
        Grid grid(10);

        Bar_info bars_info[10];

        bars_info[0].horizontal = true;
        bars_info[0].number_of_cells = 8;
        bars_info[0].pos = sf::Vector2f(50, 400); // official

        bars_info[1].horizontal = false;
        bars_info[1].number_of_cells = 5;
        bars_info[1].pos = sf::Vector2f(50 + (85 * 2), 400 - (85 * 4)); // aloof

        bars_info[2].horizontal = false;
        bars_info[2].number_of_cells = 5;
        bars_info[2].pos = sf::Vector2f(50 + (85 * 7), 400 - (85 * 4)); // focal

        bars_info[3].horizontal = true;
        bars_info[3].number_of_cells = 3;
        bars_info[3].pos = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2)); // oil

        bars_info[4].horizontal = true;
        bars_info[4].number_of_cells = 4;
        bars_info[4].pos = sf::Vector2f(50 + (85 * 6), 400 - (85 * 3)); // coil

        bars_info[5].horizontal = false;
        bars_info[5].number_of_cells = 4;
        bars_info[5].pos = sf::Vector2f(50 + (85 * 9), 400 - (85 * 3)); // loaf

        bars_info[6].horizontal = false;
        bars_info[6].number_of_cells = 4;
        bars_info[6].pos = sf::Vector2f(50 + (85 * 4), 400); // calf

        bars_info[7].horizontal = true;
        bars_info[7].number_of_cells = 4;
        bars_info[7].pos = sf::Vector2f(50 + (85 * 1), 400 + (85 * 2)); // scale

        bars_info[8].horizontal = true;
        bars_info[8].number_of_cells = 4;
        bars_info[8].pos = sf::Vector2f(50, 400 + (85 * 5)); // alas

        bars_info[9].horizontal = false;
        bars_info[9].number_of_cells = 6;
        bars_info[9].pos = sf::Vector2f(50 + (85 * 1), 400); // fiscal

        grid.make(window, bars_info);

        LetterOptions options("arialbd", sf::Vector2f(975, 150), "F I L S A O C", sf::Color(204, 102, 153), 150);
        options.draw(window);

        UserWordInput in;
        in.input(window, "arialbd", level_num, back_button);
    }
}

void level_button::run(sf::RenderWindow &window, int &check)
{
    if (check == 0)
    {
        window.draw(button);
        window.draw(button_text);
    }
}
