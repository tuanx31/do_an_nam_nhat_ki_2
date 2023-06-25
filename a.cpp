#include <sstream>
#include <fstream>
#include"Team.h"
using namespace std;

    vector<Team> list_player; 

int main()
{

    ifstream read_player("info/Team.txt"); // mở file để đọc
    string input;                            // đọc từng dòng rồi cho vào input
    vector<string> all_lines;                // 1 mảng gồm nhiều input
             // mảng player
    while (getline(read_player, input))
    {
        all_lines.push_back(input); // thêm input vào mảng
    }
    
    string item;
    for (const string &line : all_lines)
    {
        vector<string> elements;
        stringstream ss(line);
        while (getline(ss, item, ';'))
        {
            elements.push_back(item);
        }
        Team player(elements[0], elements[1], elements[2], elements[3]);
        list_player.push_back(player);
    }
    for (Team &player : list_player)
    {
        player.show_inf();
        cout << "\n====================================="<<endl;
    }
    return 0;
}
