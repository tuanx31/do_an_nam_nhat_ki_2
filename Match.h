#pragma once // tránh xung đột library
#include <iostream>
#include "Team.h"
using namespace std;
class Match
{
    string date; // dd/mm/yyy
    string Stadium;
    string team1, team2;
    int score_doi_1,score_doi_2; // dinh dang ...-...

public:
    Match(){};
    Match(string _date, string _stu, string _team1, string _team2, int _score_doi_1,int _score_doi_2) : date(_date), Stadium(_stu), team1(_team1), team2(_team2), score_doi_1(_score_doi_1),score_doi_2(_score_doi_2){};
    void insert_inf();
    void show_inf();
};

void Match::insert_inf()
{
    cout << "Nhap ngay thi dau : ";
    fflush(stdin);
    getline(cin, date);
    cout << "Nhap san thi dau : ";
    fflush(stdin);
    getline(cin, Stadium);
    cout << "Nhap ten doi bong  1 : ";
    fflush(stdin);
    getline(cin, team1);
    cout << "Nhap ten doi bong  2 : ";
    fflush(stdin);
    getline(cin, team2);
    cout << "nhap ti so  lan luot : ";
    cin>>score_doi_1>>score_doi_2;
}
void Match::show_inf()
{
    cout << "Ngay thi dau: " << date << endl;
    cout << "San thi dau: " << Stadium << endl;
    cout << "Doi 1: " << team1 << endl;
    cout << "Doi 2: " << team2 << endl;
    cout << "Ti so: " << score_doi_1 <<'-'<<score_doi_2 <<endl;
}