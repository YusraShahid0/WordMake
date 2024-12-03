#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#define BACKSPACE 8

class UserWordInput
{
private:
    sf::Text user_input;
    sf::Font font;

    //the correct words for all the levels
    const char *correct_words_level1[5] = {"NUT", "NOT", "TON", "OUT", "UNTO"};
    const char *correct_words_level2[8] = {"BITE", "TAB", "BET", "TEA", "BEAT", "ATE", "EAT", "BAT"};
    const char *correct_words_level3[6] = {"SIP", "SAPS", "APPEASED", "AIDE", "SEA", "SPADED"};
    const char *correct_words_level4[6] = {"SADDEN", "DENTIST", "ANT", "DENS", "DATA", "DNA"};
    const char *correct_words_level5[10] = {"ALOOF", "OIL", "OFFICIAL", "FOCAL", "COIL", "LOAF", "CALF", "SOIL", "ALAS", "FISCAL"};

    sf::Text victory_text;

    //deletes the last letter from the user input
    void delete_letter();

    //displays the word on the grid if it was correct
    void word_on_grid(sf::RenderWindow &window, std::string word);

    public:
    //default constructor
    UserWordInput();

    //function for displaying the usser input and checking if it is correct
    void input(sf::RenderWindow &window, std::string Font, int level, bool &back_button);

};