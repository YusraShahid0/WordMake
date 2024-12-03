#include <start_screen.hpp>
using namespace std;

void start_screen::run(sf::RenderWindow &window, int &start_screen_checker, int &level_checker, bool &back_button)
{

    sf::RectangleShape button;
    sf::Text text;
    sf::Text start_text;
    sf::Font font;
    // start button text
    font.loadFromFile("fonts/arialbd.ttf");
    text.setFont(font);
    text.setString("Click here to play!");
    text.setFillColor(sf::Color(204, 102, 153));
    text.setCharacterSize(50);
    // start button
    button.setSize(sf::Vector2f(500.f, 150.f));
    button.setFillColor(sf::Color(0, 115, 153));
    button.setOutlineColor(sf::Color::Black);
    button.setOutlineThickness(5);
    // title text
    start_text.setPosition(1920 / 2 - 350, 1080 / 4 - 190);
    start_text.setFont(font);
    start_text.setString("WordMake");
    start_text.setOutlineColor(sf::Color::Black);
    start_text.setOutlineThickness(7);
    start_text.setCharacterSize(150);
    start_text.setFillColor(sf::Color(0, 115, 153));
    sf::Vector2f pos = sf::Vector2f(1920 / 2 - 250, 700);

    // background image
    sf::Texture texture;
    sf::Sprite start_image;
    if (!texture.loadFromFile("start_imag.jpg"))
    {
        cout << "Error" << endl;
    }
    start_image.setTexture(texture);
    button.setPosition(pos);

    // boundary positions of the button
    float xPos = (pos.x + button.getGlobalBounds().width / 2) - (text.getGlobalBounds().width / 2);
    float yPos = (pos.y + button.getGlobalBounds().height / 2) - (text.getGlobalBounds().height / 2);

    // setting the highlight color of the start button when user hovers mouse over it
    if (start_screen_checker == 0 && (sf::Mouse::getPosition().x > pos.x && sf::Mouse::getPosition().x < (pos.x + 500.f)) && (sf::Mouse::getPosition().y > pos.y + 35 && sf::Mouse::getPosition().y < (pos.y + 35 + 150.f)))
    {
        button.setFillColor(sf::Color(204, 102, 153));
        text.setFillColor(sf::Color(0, 115, 153));
        window.draw(button);
        window.draw(text);
    }

    // position of the button text
    text.setPosition({xPos, yPos});

    // condition where user has pressed the start button thus turing the start_screen checker on indicating that the screen will switch to main menu
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && (sf::Mouse::getPosition().x > pos.x && sf::Mouse::getPosition().x < (pos.x + 500.f)) && (sf::Mouse::getPosition().y > pos.y + 35 && sf::Mouse::getPosition().y < (pos.y + 35 + 150.f)))
    {
        start_screen_checker = 1;
    }

    // displaying main menu screen
    if (start_screen_checker == 1)
    {
        // positions for level buttons
        sf::Vector2f pos1 = sf::Vector2f(105, 70);
        sf::Vector2f pos2 = sf::Vector2f(710, 70);
        sf::Vector2f pos3 = sf::Vector2f(1315, 70);
        sf::Vector2f pos4 = sf::Vector2f(105, 540);
        sf::Vector2f pos5 = sf::Vector2f(1315, 540);
        sf::Vector2f size = sf::Vector2f(500, 400);
        window.clear();
        // background image
        window.draw(start_image);
        // calling 5 objects of level_button which makes 5 unique levels
        level_button level_button1(size, sf::Color(0, 115, 153), sf::Vector2f(105, 70), "level 1", sf::Color(204, 102, 153), font);
        level_button level_button2(size, sf::Color(0, 115, 153), sf::Vector2f(710, 70), "level 2", sf::Color(204, 102, 153), font);
        level_button level_button3(size, sf::Color(0, 115, 153), sf::Vector2f(1315, 70), "level 3", sf::Color(204, 102, 153), font);
        level_button level_button4(size, sf::Color(0, 115, 153), sf::Vector2f(105, 540), "level 4", sf::Color(204, 102, 153), font);
        level_button level_button5(size, sf::Color(0, 115, 153), sf::Vector2f(1315, 540), "level 5", sf::Color(204, 102, 153), font);
        // calling run function of each level
        level_button1.run(window, level_checker);
        level_button2.run(window, level_checker);
        level_button3.run(window, level_checker);
        level_button4.run(window, level_checker);
        level_button5.run(window, level_checker);

        level_button1.highlight(window, level_checker);
        level_button2.highlight(window, level_checker);
        level_button3.highlight(window, level_checker);
        level_button4.highlight(window, level_checker);
        level_button5.highlight(window, level_checker);

        sf::Text welcome;
        welcome.setString("WELCOME TO \n WORD MAKE!");
        welcome.setCharacterSize(70);
        welcome.setPosition(710, 600);
        welcome.setFillColor(sf::Color::White);
        welcome.setFont(font);
        welcome.setOutlineColor(sf::Color::Black);
        welcome.setOutlineThickness(5);

        sf::Text smiley;
        smiley.setString(":-)");
        smiley.setCharacterSize(90);
        smiley.setPosition(900, 750);
        smiley.setFillColor(sf::Color(204, 102, 153));
        smiley.setFont(font);

        window.draw(welcome);

        window.draw(smiley);

        float x_end1 = pos1.x + size.x;
        float y_end1 = pos1.y + size.y;

        // checks if level1 is pressed
        if ((level_checker == 0 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && (sf::Mouse::getPosition().x > pos1.x && sf::Mouse::getPosition().x < x_end1) && (sf::Mouse::getPosition().y > pos1.y + 35.f && sf::Mouse::getPosition().y < y_end1 + 35.f)) || level_checker == 1)
        {
            level_button1.level_click(window, 1, back_button);
            level_checker = 1;
            back_button = false;
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                level_checker = 0;
                back_button = true;
            }
        }

        float x_end2 = pos2.x + size.x;
        float y_end2 = pos2.y + size.y;

        // checks if level2 is pressed
        if ((level_checker == 0 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && ((sf::Mouse::getPosition().x > pos2.x && sf::Mouse::getPosition().x < x_end2) && (sf::Mouse::getPosition().y > pos2.y + 35.f && sf::Mouse::getPosition().y < y_end2 + 35.f))) || level_checker == 2)
        {
            level_button2.level_click(window, 2, back_button);
            level_checker = 2;
            back_button = false;
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                level_checker = 0;
                back_button = true;
            }
        }

        float x_end3 = pos3.x + size.x;
        float y_end3 = pos3.y + size.y;

        // checks if level3 is pressed
        if ((level_checker == 0 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && ((sf::Mouse::getPosition().x > pos3.x && sf::Mouse::getPosition().x < x_end3) && (sf::Mouse::getPosition().y > pos3.y + 35.f && sf::Mouse::getPosition().y < y_end3 + 35.f))) || level_checker == 3)
        {
            level_button3.level_click(window, 3, back_button);
            level_checker = 3;
            back_button = false;
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                level_checker = 0;
                back_button = true;
            }
        }

        float x_end4 = pos4.x + size.x;
        float y_end4 = pos4.y + size.y;

        // checks if level4 is pressed
        if ((level_checker == 0 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && ((sf::Mouse::getPosition().x > pos4.x && sf::Mouse::getPosition().x < x_end4) && (sf::Mouse::getPosition().y > pos4.y + 35.f && sf::Mouse::getPosition().y < y_end4 + 35.f))) || level_checker == 4)
        {
            level_button4.level_click(window, 4, back_button);
            level_checker = 4;
            back_button = false;
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                level_checker = 0;
                back_button = true;
            }
        }

        float x_end5 = pos5.x + size.x;
        float y_end5 = pos5.y + size.y;

        // checks if level5 is pressed
        if ((level_checker == 0 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && ((sf::Mouse::getPosition().x > pos5.x && sf::Mouse::getPosition().x < x_end5) && (sf::Mouse::getPosition().y > pos5.y + 35.f && sf::Mouse::getPosition().y < y_end5 + 35.f))) || level_checker == 5)
        {
            level_button5.level_click(window, 5, back_button);
            level_checker = 5;
            back_button = false;
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                level_checker = 0;
                back_button = true;
                // level_button5.level_click(window, 5, back_button);
            }
        }

        window.display();
    }

    if (start_screen_checker == 0)
    {

        window.clear(sf::Color::Black);

        window.draw(start_image);

        window.draw(button);

        window.draw(text);

        window.draw(start_text);

        window.display();
    }
}