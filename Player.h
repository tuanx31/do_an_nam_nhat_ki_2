#pragma once
#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    string id; // cmnd
    string national;
    string date_of_birth;  // dd//mm/yyyy
    string height, weight; // height : cm, weight: kg
    string postion_play;

public:
    Player(){};
    Player(string _name, string _id, string _nation, string _date, string _height, string _weight, string _postion_pl) : name(_name), id(_id), national(_nation), date_of_birth(_date), height(_height), weight(_weight), postion_play(_postion_pl){};
    void insert_inf();
    void show_inf();
};

void Player::insert_inf()
{
    cout << "Nhap ho ten : ";
    fflush(stdin);
    getline(cin, name);
    cout << "Nhap cmnd : ";
    fflush(stdin);
    getline(cin, id);
    cout << "Nhap quoc tich : ";
    fflush(stdin);
    getline(cin, national);
    cout << "Nhap chieu cao (cm), can nang(kg) : ";
    cin >> height >> weight;
    cout << "Nhap vi tri choi : ";
    fflush(stdin);
    getline(cin, postion_play);
}
void Player::show_inf()
{
    cout << "Ho ten : " << name << endl;
    cout << "So cmnd : " << id << endl
         << "Quoc tich : " << national << endl
         << "Chieu cao : " << height << "cm , can nang : " << weight << "kg";
}
