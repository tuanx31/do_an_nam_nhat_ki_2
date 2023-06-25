#pragma once
#include "Player.h"
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
class Team
{
    string name, location, coach,id_team;
    vector<Player> list_player;

public:
    Team(){};
    Team(string _id,string _name, string _location, string _coach) : id_team(_id),name(_name), location(_location), coach(_coach){};
    void addPlayer(Player player);
    void insert_inf();
    void show_inf();
    void insert_player_from_file();
    string get_name();
    string get_id();
    void insert_team_to_file();
    string get_coach();
    string get_location();
};
string Team::get_location(){
    return location;
}
string Team::get_coach(){
    return coach;
}
void Team::insert_team_to_file(){
    ofstream MyFile("info/player.txt",ios::app);
    MyFile<<endl<<id_team<<";"<<name<<";"<<location<<";"<<coach;
    MyFile.close();
}

string Team::get_id(){
    return id_team;
}
string Team::get_name(){
    return name;
}
void Team::addPlayer(Player player)
{
    list_player.push_back(player);
}
void Team::insert_inf()
{
    cout<<"Nhập id team : ";
    fflush(stdin);
    getline(cin,id_team);
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
{   cout<<"id : "<<id_team<<endl;
    cout << "ten doi bong : " << name << endl;
    cout << "dia phuong : " << location << endl;
    cout << "huan luyen vien : " << coach << endl;
}
