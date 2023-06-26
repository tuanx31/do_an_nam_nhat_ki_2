#pragma once // tránh xung đột library
#include <iostream>
#include "Team.h"
using namespace std;
#include <iomanip>
class Match
{
    string date; // dd/mm/yyy
    string Stadium;
    string team1, team2;
    int score_doi_1,score_doi_2; // dinh dang ...-...
    int staticscoredoi1,staticscoredoi2 ;//tổng điểm của các trận đấu
public:
    Match(){};
    Match(string _date, string _stu, string _team1, string _team2, int _score_doi_1,int _score_doi_2) : date(_date), Stadium(_stu), team1(_team1), team2(_team2), score_doi_1(_score_doi_1),score_doi_2(_score_doi_2){};
    void insert_inf();
    void show_inf();
    string get_date();
    string get_stadium();
    string get_team1();
    string get_team2();
    int get_score1();
    int get_score2();
    void insert_to_file();
    void savefilecsv();
    void Score_statistics();
    int get_staticscoredoi1();
    void showdiem();
};

void Match::showdiem(){
    cout<<"Ngày "<<date<<endl<<team1<<" : "<<staticscoredoi1<<" Điểm"<<endl<<team2<<" : "<<staticscoredoi2<<" Điểm"<<endl;

}

int Match::get_staticscoredoi1(){
    return staticscoredoi1;
}

void Match::Score_statistics(){
    // thắng +3, thua +0 , hòa +1
    if (score_doi_1 > score_doi_2)
    {
        staticscoredoi1 = 3;
        staticscoredoi2 = 0;
    }
    else if (score_doi_1 <score_doi_2)
    {
        staticscoredoi2 = 3;
        staticscoredoi1 = 0;
    }
    else{
        staticscoredoi2 = 1;
        staticscoredoi1 = 1;
    }
}

void Match::savefilecsv(){
    ofstream MyFile("info/Match.csv",ios::app);
    MyFile<<date<<";"<<Stadium<<";"<<team1<<";"<<team2<<";"<<score_doi_1<<"--"<<score_doi_2<<endl;
    MyFile.close();
}


void Match::insert_to_file(){
    ofstream MyFile("info/Match.txt",ios::app);
    MyFile<<date<<";"<<Stadium<<";"<<team1<<";"<<team2<<";"<<score_doi_1<<";"<<score_doi_2<<endl;
    MyFile.close();
}
string Match::get_date(){
    return date;
}
string Match::get_stadium(){
    return Stadium;
}
string Match::get_team1(){
    return team1;
}
string Match::get_team2(){
    return team2;
}
void Match::insert_inf()
{
    cout << "Nhập ngày thi đấu : ";
    fflush(stdin);
    getline(cin, date);
    cout << "Nhập sân thi đấu : ";
    fflush(stdin);
    getline(cin, Stadium);
    cout << "Nhập tên đội bóng  1 : ";
    fflush(stdin);
    getline(cin, team1);
    cout << "Nhập tên đội bóng  2 : ";
    fflush(stdin);
    getline(cin, team2);
    cout << "Nhập tỉ số lần lượt : ";
    cin>>score_doi_1>>score_doi_2;
}
void Match::show_inf()
{
    string score = to_string(score_doi_1)+"-"+to_string(score_doi_2);
   std::cout << std::setw(15) <<date
                  << std::setw(20) <<Stadium
                  << std::setw(15) <<team1
                  << std::setw(15) <<team2
                  <<score<< std::endl;
}