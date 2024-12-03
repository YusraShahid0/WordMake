#include <Grid.hpp>

Grid::Grid(int no_of_bars) : no_of_bars(no_of_bars) {}

// displays the grid on the window
void Grid::make(sf::RenderWindow &window, Bar_info bars_info[])
{
    sf::Vector2f pre_pos = sf::Vector2f(100, 500);
    sf::Vector2f cur_pos;
    int previous_bar_number;

    Bar bars[no_of_bars];

    for (int i = 0; i < no_of_bars; i++)
    {
        bars[i].set_length(bars_info[i].number_of_cells);
        bars[i].set_pos(bars_info[i].pos);
        bars[i].set_horizontal(bars_info[i].horizontal);

        bars[i].make(window);
    }
}