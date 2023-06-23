#pragma once
#include "Player.h"
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
class Team
{
    string name, location, coach;
    vector<Player> list_player;

public:
    Team(){};
    Team(string _name, string _location, string _coach) : name(_name), location(_location), coach(_coach){};
    void addPlayer(Player player);
    void insert_inf();
    void show_inf();
    void insert_player_from_file();
};
void Team::addPlayer(Player player)
{
    list_player.push_back(player);
}
void Team::insert_inf()
{
    Player player;
    cout << "Nhap ten doi bong : ";
    fflush(stdin);
    getline(cin, name);
    cout << "Nhap dia phuong : ";
    fflush(stdin);
    getline(cin, location);
    cout << "Nhap ten huan luyen vien : ";
    fflush(stdin);
    getline(cin, coach);
}
void Team::show_inf()
{
    cout << "ten doi bong : " << name << endl;
    cout << "dia phuong : " << location << endl;
    cout << "huan luyen vien : " << coach << endl;
}
