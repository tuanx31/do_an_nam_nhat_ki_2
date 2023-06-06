#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include "Player.h"
using namespace std;
int main()
{
    ifstream read_player("player.txt");
    string input;
    vector<string> all_lines;
    vector<Player> list_player;
    while (getline(read_player, input))
    {
        all_lines.push_back(input);
    }
    // Print all lines
    for (const string &line : all_lines)
    {
        cout << line << endl;
    }
    vector<string> elements;
    stringstream ss(input);
    string item;

    while (getline(ss, item, '|'))
    {
        elements.push_back(item);
    }
    Player player(elements[0], elements[1], elements[2], elements[3], elements[4], elements[5], elements[6]);
    // In các phần tử trong vector
    // for (const string &element : elements)
    // {
    //     cout << element << endl;
    // }
    // player.show_inf();
    return 0;
}
