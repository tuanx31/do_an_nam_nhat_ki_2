#pragma once
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Player
{
private:
    string id ;// bao gom ma id cua idteam
    string name;
    string cmnd; // cmnd
    string national;
    string date_of_birth;  // dd//mm/yyyy
    string height, weight; // height : cm, weight: kg
    string postion_play;
    string idteam;

public:
    Player(){};
    Player(string _name, string _cmnd, string _nation, string _date, string _height, string _weight, string _postion_pl, string _idteam) : name(_name), cmnd(_cmnd), national(_nation), date_of_birth(_date), height(_height), weight(_weight), postion_play(_postion_pl),idteam(_idteam){};
    void insert_inf();
    void show_inf();
    void insert_player_to_file();
    string get_name();
    string get_idteam();
};

void Player::insert_inf()
{
    cout << "Nhập họ tên : ";
    fflush(stdin);
    getline(cin, name);
    cout << "Nhập cmnd : ";
    fflush(stdin);
    getline(cin, cmnd);
    cout << "Nhập quốc tịch : ";
    fflush(stdin);
    getline(cin, national);
    cout << "Nhập chiều cao (cm), cân nặng(kg) : ";
    cin >> height >> weight;
    cout << "Nhập vị trí chơi : ";
    fflush(stdin);
    getline(cin, postion_play);
    cout<<"Nhập id team : ";
    fflush(stdin);
    getline(cin,idteam);
}

void Player::show_inf()
{
    cout << "Ho ten : " << name << endl;
    cout << "So cmnd : " << cmnd << endl
         << "Quoc tich : " << national << endl
         << "Chieu cao : " << height << "cm , can nang : " << weight << "kg"<<endl<<"id team : "<<idteam<<endl;

}
string Player::get_name(){
    return name;
}

void Player::insert_player_to_file(){
    ofstream MyFile("info/player.txt",ios::app);
    MyFile<<endl<<name<<";"<<id<<";"<<national<<";"<<date_of_birth<<";"<<weight<<";"<<height<<";"<<postion_play<<";"<<idteam;
    MyFile.close();
}
string Player::get_idteam(){
    return idteam;
}