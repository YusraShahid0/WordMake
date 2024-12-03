#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include "UserWordInput.hpp"
#define BACKSPACE 8
std::string text;
std::string victory;

//GLOBAL VARIABLES
// victory checkers for level one
int victory_check31 = 0;
int victory_check32 = 0;
int victory_check33 = 0;
int victory_check34 = 0;
int victory_check35 = 0;

// victory checkers for level two
int victory_check23 = 0;
int victory_check24 = 0;
int victory_check25 = 0;
int victory_check26 = 0;
int victory_check27 = 0;
int victory_check28 = 0;
int victory_check29 = 0;
int victory_check30 = 0;

// victory checkers for level three
int victory_check17 = 0;
int victory_check18 = 0;
int victory_check19 = 0;
int victory_check20 = 0;
int victory_check21 = 0;
int victory_check22 = 0;

// victory checkers for level four
int victory_check1 = 0;
int victory_check2 = 0;
int victory_check3 = 0;
int victory_check4 = 0;
int victory_check5 = 0;
int victory_check6 = 0;

// victory checkers for level five
int victory_check7 = 0;
int victory_check8 = 0;
int victory_check9 = 0;
int victory_check10 = 0;
int victory_check11 = 0;
int victory_check12 = 0;
int victory_check13 = 0;
int victory_check14 = 0;
int victory_check15 = 0;
int victory_check16 = 0;

int key_check = 0;


void UserWordInput::delete_letter()
{
    std::string new_text;
    for (int i = 0; i < text.size() - 1; ++i)
    {
        new_text[i] = text[i];
    }
    text = new_text;
}

void  UserWordInput::word_on_grid(sf::RenderWindow &window, std::string word)
{
    if (word == "SADDEN")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos = sf::Vector2f(200, 400);

        ans.setString(" S  A  D  D  E  N");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "DENTIST")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(30, 400 + (85 * 3));

        ans.setString(" D  E  N  T   I   S  T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "DNA")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200 + (85 * 1), 400 - (85 * 3));

        ans.setString(" D  N  A");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "ANT")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200 + (85 * 5), 400 - (85 * 1));

        ans.setString(" A\n N\n T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "DENS")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200 + (85 * 3), 400);

        if (victory_check2 == 2)
            ans.setString(" D\n E\n N");
        else
            ans.setString(" D\n E\n N\n S");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "DATA")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200 + (85 * 1), 400 - (85 * 3));

        if (victory_check1 == 1)
            ans.setString(" D \n A \n T");
        else
            ans.setString(" D \n A \n T \n A");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "ALOOF")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 2), 400 - (85 * 4));

        if (victory_check9 == 9)
            ans.setString(" A\n L\n O\n O");
        else
            ans.setString(" A\n L\n O\n O\n F");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "OIL")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2));

        if (victory_check7 == 7)
            ans.setString("      I   L");
        else
            ans.setString(" O  I   L");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "OFFICIAL")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50, 400);

        ans.setString(" O  F  F  I   C   I   A  L");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "FOCAL")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 7), 400 - (85 * 4));

        if (victory_check9 == 9)
            ans.setString(" F\n O\n C\n A");
        else
            ans.setString(" F\n O\n C\n A\n L");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "COIL")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 6), 400 - (85 * 3));

        if (victory_check12 == 12 && victory_check10 == 0)
            ans.setString(" C  O  I    ");
        if (victory_check12 == 12 && victory_check10 == 10)
            ans.setString(" C  O  I    ");
        if (victory_check10 == 10 && victory_check12 == 0)
            ans.setString(" C      I   L");
        else
            ans.setString(" C  O  I   L");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "LOAF")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 9), 400 - (85 * 3));

        ans.setString(" L\n O\n A\n F\n");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "CALF")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 4), 400);

        if (victory_check9 == 9 && victory_check14 == 14)
            ans.setString("  \n A\n  \n F\n");

        if (victory_check9 == 0 && victory_check14 == 14)
            ans.setString(" C\n A\n  \n F\n");

        if (victory_check9 == 9 && victory_check14 == 0)
            ans.setString("  \n A\n L\n F\n");
        if (victory_check9 == 0 && victory_check14 == 0)
            ans.setString(" C\n A\n L\n F\n");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "SOIL")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 1), 400 + (85 * 2));

        if (victory_check16)
            ans.setString("     O  I   L");
        else
            ans.setString(" S  O  I   L");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "ALAS")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50, 400 + (85 * 5));

        ans.setString(" A  L  A  S");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "FISCAL")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 1), 400);

        if (victory_check9 == 9)
            ans.setString("  \n I\n S\n C\n A\n L");
        if (victory_check15 == 15)
            ans.setString(" F\n I\n S\n C\n A\n");
        else
            ans.setString(" F\n I\n S\n C\n A\n L");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "SIP")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2));

        ans.setString(" S   I  P");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "SAPS")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2));

        if (victory_check19 == 19)
            ans.setString(" S\n A\n  \n S\n");
        else
            ans.setString(" S\n A\n P\n S\n");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "APPEASED")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50, 400);

        if (victory_check20 == 20)
            ans.setString(" A  P  P  E       S  E  D");
        else
            ans.setString(" A  P  P  E  A  S  E  D");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "AIDE")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 4), 400);

        if (victory_check22 == 22)
            ans.setString(" A\n I\n D\n  ");
        else
            ans.setString(" A\n I\n D\n E");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "SEA")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 6), 400 - (85 * 1));

        if (victory_check19 = 19)
            ans.setString(" S\n  \n A");
        else
            ans.setString(" S\n E\n A");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "SPADED")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50, 400 + (85 * 3));

        ans.setString(" S  P  A  D  E  D");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "BITE")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2));

        ans.setString(" B  I   T  E");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "TAB")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 4), 400 - (85 * 2));

        ans.setString(" T\n A\n B");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "BET")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 4), 400);

        if (victory_check24 == 24)
            ans.setString("     E  T");
        else
            ans.setString(" B  E  T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "TEA")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 6), 400);

        if (victory_check25 == 25)
            ans.setString("  \n E\n A");
        else
            ans.setString(" T\n E\n A");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "BEAT")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50, 400 + (85 * 2));

        ans.setString(" B  E  A  T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "ATE")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 1), 400);

        if (victory_check27 == 27)
            ans.setString(" A\n T\n  ");
        else
            ans.setString(" A\n T\n E");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "EAT")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50, 400);

        ans.setString(" E  A  T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "BAT")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(50 + (85 * 2), 400 - (85 * 2));

        if (victory_check29 == 29)
            ans.setString(" B\n A\n  ");
        else
            ans.setString(" B\n A\n T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "NUT")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200, 400);
        ans.setString(" N\n U\n T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "NOT")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200, 400);
        if (victory_check33 == 33)
            ans.setString(" N  O    ");
        else
            ans.setString(" N  O  T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "TON")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200 + (85 * 2), 400);
        ans.setString(" T\n O\n N");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "OUT")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200 + (85 * 2), 400 + (85 * 1));
        ans.setString(" O  U  T");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }

    if (word == "UNTO")
    {
        sf::Text ans;
        this->font.loadFromFile("fonts/arialbd.ttf");
        sf::Vector2f pos1 = sf::Vector2f(200 + (85 * 4), 400 - (85 * 1));

        if (victory_check34 == 34)
            ans.setString(" U\n N\n  \n O");
        else
            ans.setString(" U\n N\n T\n O");
        ans.setFont(font);
        ans.setCharacterSize(70);
        ans.setPosition(pos1);
        ans.setFillColor(sf::Color::Blue);
        window.draw(ans);
    }
}

UserWordInput::UserWordInput() {}

//function for displaying the usser input and checking if it is correct
void UserWordInput::input(sf::RenderWindow &window, std::string Font, int level, bool &back_button)
{
    if (back_button == true)
    {
        text = "";
        victory = "";
    }

    if (level == 1)
    {
        //checks the word user typed after Enter is pressed
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
        {
            sf::Text error;
            error.setFont(font);
            error.setCharacterSize(35);
            error.setFillColor(sf::Color::White);
            error.setPosition(950.f, 750);
            window.draw(error);
            text = "";
        }

        if (victory_check31 == 31 &&
            victory_check32 == 32 &&
            victory_check33 == 33 &&
            victory_check34 == 34 &&
            victory_check35 == 35)
        {
            sf::Text level_finish;
            level_finish.setString("Return to Main Menu for next level!");
            level_finish.setFont(font);
            level_finish.setCharacterSize(35);
            level_finish.setFillColor(sf::Color::White);
            level_finish.setPosition(950.f, 750);
            window.draw(level_finish);
            text = "";
            victory = "";
        }

        //text to clarify user for back button
        sf::Text back_text;
        back_text.setString("Press Escape for Main Menu");
        back_text.setFont(font);
        back_text.setCharacterSize(35);
        back_text.setFillColor(sf::Color::White);
        back_text.setPosition(1000, 50);
        window.draw(back_text);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::T) && key_check == 0)
        {
            text += 'T';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::N) && key_check == 0)
        {
            text += 'N';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::U) && key_check == 0)
        {
            text += 'U';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::O) && key_check == 0)
        {
            text += 'O';
            key_check = 1;
            victory = "";
        }

        //ensures that a keyboard press is registered once on the screen
        if (!sf::Keyboard::isKeyPressed(sf::Keyboard::T) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::N) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::U) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::O) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
        {
            key_check = 0;
        }

        //backspace option for user
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) && key_check == 0)
        {
            text = text.substr(0, text.size() - 1);
            key_check = 1;
        }

        //displaying input text
        user_input.setString(text);
        user_input.setPosition(950.f, 750);
        user_input.setCharacterSize(150);
        user_input.setFont(font);
        user_input.setFillColor(sf::Color::White);
        window.draw(user_input);

        //displaying victory text when the user gets the right word
        victory_text.setString(victory);
        victory_text.setFont(font);
        victory_text.setCharacterSize(85);
        victory_text.setPosition(950.f, 750);
        victory_text.setFillColor(sf::Color::Green);
        window.draw(victory_text);

        //victory checkers for finding out which specific word the user typed for level one
        if (victory_check31 == 31)
            word_on_grid(window, "NUT");

        if (victory_check32 == 32)
            word_on_grid(window, "NOT");

        if (victory_check33 == 33)
            word_on_grid(window, "TON");

        if (victory_check34 == 34)
            word_on_grid(window, "OUT");

        if (victory_check35 == 35)
            word_on_grid(window, "UNTO");

        for (int j = 0; j < 5; ++j)
        {
            //checking user input with the correct words array for level one
            if (text == correct_words_level1[j])
            {
                text = "";
                victory = "Correct!";

                if (correct_words_level1[j] == "NUT")
                {
                    victory_check31 = 31;
                }
                if (correct_words_level1[j] == "NOT")
                {
                    victory_check32 = 32;
                }
                if (correct_words_level1[j] == "TON")
                {
                    victory_check33 = 33;
                }
                if (correct_words_level1[j] == "OUT")
                {
                    victory_check34 = 34;
                }
                if (correct_words_level1[j] == "UNTO")
                {
                    victory_check35 = 35;
                }
            }
        }
    }

    if (level == 2)  //same functionality as above
    {
        if (victory_check23 == 23 &&
            victory_check24 == 24 &&
            victory_check25 == 25 &&
            victory_check26 == 26 &&
            victory_check27 == 27 &&
            victory_check28 == 28 &&
            victory_check29 == 29 &&
            victory_check30 == 30)
        {
            sf::Text level_finish;
            level_finish.setString("Return to Main Menu for next level!");
            level_finish.setFont(font);
            level_finish.setCharacterSize(35);
            level_finish.setFillColor(sf::Color::White);
            level_finish.setPosition(950.f, 750);
            window.draw(level_finish);
            text = "";
            victory = "";
        }
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
        {
            sf::Text error;
            error.setFont(font);
            error.setCharacterSize(35);
            error.setFillColor(sf::Color::White);
            error.setPosition(950.f, 750);
            window.draw(error);
            text = "";
        }
        sf::Text back_text;
        back_text.setString("Press Escape for Main Menu");
        back_text.setFont(font);
        back_text.setCharacterSize(35);
        back_text.setFillColor(sf::Color::White);
        back_text.setPosition(1000, 50);
        window.draw(back_text);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::B) && key_check == 0)
        {
            text += 'B';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && key_check == 0)
        {
            text += 'I';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && key_check == 0)
        {
            text += 'A';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::T) && key_check == 0)
        {
            text += 'T';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && key_check == 0)
        {
            text += 'E';
            key_check = 1;
            victory = "";
        }

        if (!sf::Keyboard::isKeyPressed(sf::Keyboard::A) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::B) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::T) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::E) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::I) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
        {
            key_check = 0;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) && key_check == 0)
        {
            text = text.substr(0, text.size() - 1);
            key_check = 1;
        }

        user_input.setString(text);
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        user_input.setPosition(950.f, 750);
        user_input.setCharacterSize(150);
        user_input.setFont(font);
        user_input.setFillColor(sf::Color::White);
        window.draw(user_input);
        victory_text.setString(victory);
        victory_text.setFont(font);
        victory_text.setCharacterSize(85);
        victory_text.setPosition(950.f, 750);
        victory_text.setFillColor(sf::Color::Green);
        window.draw(victory_text);

        if (victory_check23 == 23)
            word_on_grid(window, "BITE");

        if (victory_check24 == 24)
            word_on_grid(window, "TAB");

        if (victory_check25 == 25)
            word_on_grid(window, "BET");

        if (victory_check26 == 26)
            word_on_grid(window, "TEA");

        if (victory_check27 == 27)
            word_on_grid(window, "BEAT");

        if (victory_check28 == 28)
            word_on_grid(window, "ATE");

        if (victory_check29 == 29)
            word_on_grid(window, "EAT");

        if (victory_check30 == 30)
            word_on_grid(window, "BAT");

        for (int j = 0; j < 8; ++j)
        {
            if (text == correct_words_level2[j])
            {
                text = "";
                victory = "Correct!";
                if (correct_words_level2[j] == "BITE")
                {
                    victory_check23 = 23;
                }
                if (correct_words_level2[j] == "TAB")
                {
                    victory_check24 = 24;
                }
                if (correct_words_level2[j] == "BET")
                {
                    victory_check25 = 25;
                }
                if (correct_words_level2[j] == "TEA")
                {
                    victory_check26 = 26;
                }
                if (correct_words_level2[j] == "BEAT")
                {
                    victory_check27 = 27;
                }
                if (correct_words_level2[j] == "ATE")
                {
                    victory_check28 = 28;
                }
                if (correct_words_level2[j] == "EAT")
                {
                    victory_check29 = 29;
                }
                if (correct_words_level2[j] == "BAT")
                {
                    victory_check30 = 30;
                }
            }
        }
    }

    if (level == 3) //same functionality as above
    {
        if (victory_check17 == 17 &&
            victory_check18 == 18 &&
            victory_check19 == 19 &&
            victory_check20 == 20 &&
            victory_check21 == 21 &&
            victory_check22 == 22)
        {
            sf::Text level_finish;
            level_finish.setString("Return to Main Menu for next level!");
            level_finish.setFont(font);
            level_finish.setCharacterSize(35);
            level_finish.setFillColor(sf::Color::White);
            level_finish.setPosition(950.f, 750);
            window.draw(level_finish);
            text = "";
            victory = "";
        }
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
        {
            sf::Text error;
            error.setFont(font);
            error.setCharacterSize(35);
            error.setFillColor(sf::Color::White);
            error.setPosition(950.f, 750);
            window.draw(error);
            text = "";
        }
        sf::Text back_text;
        back_text.setString("Press Escape for Main Menu");
        back_text.setFont(font);
        back_text.setCharacterSize(35);
        back_text.setFillColor(sf::Color::White);
        back_text.setPosition(1000, 50);
        window.draw(back_text);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && key_check == 0)
        {
            text += 'A';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::P) && key_check == 0)
        {
            text += 'P';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && key_check == 0)
        {
            text += 'E';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && key_check == 0)
        {
            text += 'S';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && key_check == 0)
        {
            text += 'D';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && key_check == 0)
        {
            text += 'I';
            key_check = 1;
            victory = "";
        }

        if (!sf::Keyboard::isKeyPressed(sf::Keyboard::A) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::P) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::E) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::S) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::D) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::I) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
        {
            key_check = 0;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) && key_check == 0)
        {
            text = text.substr(0, text.size() - 1);
            key_check = 1;
        }

        user_input.setString(text);
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        user_input.setPosition(950.f, 750);
        user_input.setCharacterSize(150);
        user_input.setFont(font);
        user_input.setFillColor(sf::Color::White);
        window.draw(user_input);
        victory_text.setString(victory);
        victory_text.setFont(font);
        victory_text.setCharacterSize(85);
        victory_text.setPosition(950.f, 750);
        victory_text.setFillColor(sf::Color::Green);
        window.draw(victory_text);

        if (victory_check17 == 17)
            word_on_grid(window, "SIP");

        if (victory_check18 == 18)
            word_on_grid(window, "SAPS");

        if (victory_check19 == 19)
            word_on_grid(window, "APPEASED");

        if (victory_check20 == 20)
            word_on_grid(window, "AIDE");

        if (victory_check21 == 21)
            word_on_grid(window, "SEA");

        if (victory_check22 == 22)
            word_on_grid(window, "SPADED");

        for (int j = 0; j < 6; ++j)
        {
            if (text == correct_words_level3[j])
            {
                text = "";
                victory = "Correct!";
                if (correct_words_level3[j] == "SIP")
                {
                    victory_check17 = 17;
                }
                if (correct_words_level3[j] == "SAPS")
                {
                    victory_check18 = 18;
                }
                if (correct_words_level3[j] == "APPEASED")
                {
                    victory_check19 = 19;
                }
                if (correct_words_level3[j] == "AIDE")
                {
                    victory_check20 = 20;
                }
                if (correct_words_level3[j] == "SEA")
                {
                    victory_check21 = 21;
                }
                if (correct_words_level3[j] == "SPADED")
                {
                    victory_check22 = 22;
                }
            }
        }
    }

    if (level == 4) //same functionality as above
    {
        if (victory_check1 == 1 &&
            victory_check2 == 2 &&
            victory_check3 == 3 &&
            victory_check4 == 4 &&
            victory_check5 == 5 &&
            victory_check6 == 6)
        {
            sf::Text level_finish;
            level_finish.setString("Return to Main Menu for next level!");
            level_finish.setFont(font);
            level_finish.setCharacterSize(35);
            level_finish.setFillColor(sf::Color::White);
            level_finish.setPosition(950.f, 750);
            window.draw(level_finish);
            text = "";
            victory = "";
        }
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
        {
            sf::Text error;
            error.setFont(font);
            error.setCharacterSize(35);
            error.setFillColor(sf::Color::White);
            error.setPosition(950.f, 750);
            window.draw(error);
            text = "";
        }
        sf::Text back_text;
        back_text.setString("Press Escape for Main Menu");
        back_text.setFont(font);
        back_text.setCharacterSize(35);
        back_text.setFillColor(sf::Color::White);
        back_text.setPosition(1000, 50);
        window.draw(back_text);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && key_check == 0)
        {
            text += 'S';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && key_check == 0)
        {
            text += 'A';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && key_check == 0)
        {
            text += 'D';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && key_check == 0)
        {
            text += 'E';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::N) && key_check == 0)
        {
            text += 'N';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::T) && key_check == 0)
        {
            text += 'T';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && key_check == 0)
        {
            text += 'I';
            key_check = 1;
            victory = "";
        }

        if (!sf::Keyboard::isKeyPressed(sf::Keyboard::S) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::A) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::D) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::E) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::N) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::T) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::I) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
        {
            key_check = 0;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) && key_check == 0)
        {
            text = text.substr(0, text.size() - 1);
            key_check = 1;
        }

        user_input.setString(text);
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        user_input.setPosition(950.f, 750);
        user_input.setCharacterSize(150);
        user_input.setFont(font);
        user_input.setFillColor(sf::Color::White);
        window.draw(user_input);
        victory_text.setString(victory);
        victory_text.setFont(font);
        victory_text.setCharacterSize(85);
        victory_text.setPosition(900.f, 870.f);
        victory_text.setFillColor(sf::Color::Green);
        window.draw(victory_text);

        if (victory_check1 == 1)
            word_on_grid(window, "SADDEN");

        if (victory_check2 == 2)
            word_on_grid(window, "DENTIST");

        if (victory_check3 == 3)
            word_on_grid(window, "ANT");

        if (victory_check4 == 4)
            word_on_grid(window, "DENS");

        if (victory_check5 == 5)
            word_on_grid(window, "DATA");

        if (victory_check6 == 6)
            word_on_grid(window, "DNA");

        for (int j = 0; j < 6; ++j)
        {
            if (text == correct_words_level4[j])
            {
                text = "";
                victory = "Correct!";
                if (correct_words_level4[j] == "SADDEN")
                {
                    victory_check1 = 1;
                }
                if (correct_words_level4[j] == "DENTIST")
                {
                    victory_check2 = 2;
                }
                if (correct_words_level4[j] == "ANT")
                {
                    victory_check3 = 3;
                }
                if (correct_words_level4[j] == "DENS")
                {
                    victory_check4 = 4;
                }
                if (correct_words_level4[j] == "DATA")
                {
                    victory_check5 = 5;
                }
                if (correct_words_level4[j] == "DNA")
                {
                    victory_check6 = 6;
                }
            }
        }
    }

    if (level == 5) //same functionality as above
    {
        if (victory_check7 == 7 &&
            victory_check8 == 8 &&
            victory_check9 == 9 &&
            victory_check10 == 10 &&
            victory_check11 == 11 &&
            victory_check12 == 12 &&
            victory_check13 == 13 &&
            victory_check14 == 14 &&
            victory_check15 == 15 &&
            victory_check16 == 16)
        {
            sf::Text level_finish;
            level_finish.setString("Return to Main Menu for next level!");
            level_finish.setFont(font);
            level_finish.setCharacterSize(35);
            level_finish.setFillColor(sf::Color::White);
            level_finish.setPosition(950.f, 750);
            window.draw(level_finish);
            text = "";
            victory = "";
        }
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
        {
            sf::Text error;
            error.setFont(font);
            error.setCharacterSize(35);
            error.setFillColor(sf::Color::White);
            error.setPosition(950.f, 750);
            window.draw(error);
            text = "";
        }
        sf::Text back_text;
        back_text.setString("Press Escape for Main Menu");
        back_text.setFont(font);
        back_text.setCharacterSize(35);
        back_text.setFillColor(sf::Color::White);
        back_text.setPosition(1000, 50);
        window.draw(back_text);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::F) && key_check == 0)
        {
            text += 'F';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && key_check == 0)
        {
            text += 'I';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::L) && key_check == 0)
        {
            text += 'L';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && key_check == 0)
        {
            text += 'S';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && key_check == 0)
        {
            text += 'A';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::O) && key_check == 0)
        {
            text += 'O';
            key_check = 1;
            victory = "";
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::C) && key_check == 0)
        {
            text += 'C';
            key_check = 1;
            victory = "";
        }

        if (!sf::Keyboard::isKeyPressed(sf::Keyboard::O) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::F) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::I) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::C) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::A) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::S) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::L) &&
            !sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
        {
            key_check = 0;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) && key_check == 0)
        {
            text = text.substr(0, text.size() - 1);
            key_check = 1;
        }

        user_input.setString(text);
        this->font.loadFromFile("fonts/" + Font + ".ttf");
        user_input.setPosition(950.f, 750);
        user_input.setCharacterSize(150);
        user_input.setFont(font);
        user_input.setFillColor(sf::Color::White);
        window.draw(user_input);
        victory_text.setString(victory);
        victory_text.setFont(font);
        victory_text.setCharacterSize(85);
        victory_text.setPosition(950.f, 750);
        victory_text.setFillColor(sf::Color::Green);
        window.draw(victory_text);

        if (victory_check7 == 7)
            word_on_grid(window, "ALOOF");

        if (victory_check8 == 8)
            word_on_grid(window, "OIL");

        if (victory_check9 == 9)
            word_on_grid(window, "OFFICIAL");

        if (victory_check10 == 10)
            word_on_grid(window, "FOCAL");

        if (victory_check11 == 11)
            word_on_grid(window, "COIL");

        if (victory_check12 == 12)
            word_on_grid(window, "LOAF");

        if (victory_check13 == 13)
            word_on_grid(window, "CALF");

        if (victory_check14 == 14)
            word_on_grid(window, "SOIL");

        if (victory_check15 == 15)
            word_on_grid(window, "ALAS");

        if (victory_check16 == 16)
            word_on_grid(window, "FISCAL");

        for (int j = 0; j < 10; ++j)
        {
            if (text == correct_words_level5[j])
            {
                text = "";
                victory = "Correct!";
                if (correct_words_level5[j] == "ALOOF")
                {
                    victory_check7 = 7;
                }
                if (correct_words_level5[j] == "OIL")
                {
                    victory_check8 = 8;
                }
                if (correct_words_level5[j] == "OFFICIAL")
                {
                    victory_check9 = 9;
                }
                if (correct_words_level5[j] == "FOCAL")
                {
                    victory_check10 = 10;
                }
                if (correct_words_level5[j] == "COIL")
                {
                    victory_check11 = 11;
                }
                if (correct_words_level5[j] == "LOAF")
                {
                    victory_check12 = 12;
                }
                if (correct_words_level5[j] == "CALF")
                {
                    victory_check13 = 13;
                }
                if (correct_words_level5[j] == "SOIL")
                {
                    victory_check14 = 14;
                }
                if (correct_words_level5[j] == "ALAS")
                {
                    victory_check15 = 15;
                }
                if (correct_words_level5[j] == "FISCAL")
                {
                    victory_check16 = 16;
                }
            }
        }
    }
}