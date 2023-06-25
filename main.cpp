#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include "Team.h"
#include "Player.h"
#include "Match.h"
using namespace std;
class FootballManager
{
private:
    vector<Team> list_team;
    vector<Match> list_match;
    vector<Player> list_player;
public:
    void insertPlayerformfile();
    void find_player_by_name(string name);
    void showallplayer();
    void find_team_by_name(string name);
    void find_team_by_id(string id);
    void insert_team_from_file();
    void insert_Match_from_file();
    void show_all_team();
    void show_all_match();
    void find_match_by_date(string date);
    void find_match_by_stadium(string st);
    void find_match_by_team(string team);
    void find_team_by_coach(string coach);
    void find_team_by_location(string location);
};

void FootballManager::find_match_by_team(string team){
    for(Match &macth : list_match){
        if (macth.get_team1()==team)
        {
            macth.show_inf();
        }
        
    }
    for(Match &macth : list_match){
        if (macth.get_team2()==team)
        {
            macth.show_inf();
        }
        
    }
}

void FootballManager::find_match_by_stadium(string st){
    for(Match &macth : list_match){
        if (macth.get_stadium()==st)
        {
            macth.show_inf();
        }
        
    }
}
void FootballManager::find_match_by_date(string date){
    for(Match &macth : list_match){
        if (macth.get_date()==date)
        {
            macth.show_inf();
        }
        
    }      
}
void FootballManager::show_all_match(){
    for (Match &match : list_match){
        match.show_inf();
        cout << "\n====================================="<<endl;
    }
}

void FootballManager::insert_Match_from_file(){
    ifstream read_player("info/Match.txt"); // mở file để đọc
    string input;                            // đọc từng dòng rồi cho vào input
    vector<string> all_lines;                // 1 mảng gồm nhiều input   
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
        Match match(elements[0], elements[1], elements[2], elements[3],stoi(elements[4]),stoi(elements[5]));
        list_match.push_back(match);
    }
}

void FootballManager::find_team_by_location(string location){
    for(Team &team : list_team){
        if (team.get_location()==location)
        {
            team.show_inf();
        }
        
    }       
}

void FootballManager::find_team_by_coach(string coach){
    for(Team &team : list_team){
        if (team.get_coach()==coach)
        {
            team.show_inf();
        }
        
    }       
}

void FootballManager::find_team_by_id(string id){
    for(Team &team : list_team){
        if (team.get_id()==id)
        {
            team.show_inf();
        }
        
    }        
}

void FootballManager::find_team_by_name(string name){
    for(Team &team : list_team){
        if (team.get_name()==name)
        {
            team.show_inf();
        }
        
    }        
}

void FootballManager::insert_team_from_file(){
    ifstream read_player("info/Team.txt"); // mở file để đọc
    string input;                            // đọc từng dòng rồi cho vào input
    vector<string> all_lines;                // 1 mảng gồm nhiều input   
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
        Team team(elements[0], elements[1], elements[2], elements[3]);
        list_team.push_back(team);
    }
}
void FootballManager::show_all_team(){
    for (Team &team : list_team){
        team.show_inf();
        cout << "\n====================================="<<endl;
    }
}
void FootballManager::insertPlayerformfile(){
    ifstream read_player("info/player.txt"); // mở file để đọc
    string input;                            // đọc từng dòng rồi cho vào input
    vector<string> all_lines;                // 1 mảng gồm nhiều input   
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
        Player player(elements[0], elements[1], elements[2], elements[3], elements[4], elements[5], elements[6],elements[7]);
        list_player.push_back(player);
    }

}

void FootballManager::showallplayer(){
    for (Player &player :list_player){
        player.show_inf();
        cout << "\n====================================="<<endl;
    }
}
void FootballManager::find_player_by_name(string name){
    for (Player &player : list_player){
        if (player.get_name()==name)
        {
            player.show_inf();
        }
    }
}
void teamManager(){
    int chon;

    do
    {
        system("cls");
        cout<<"====================  MENU  ========================\n";
        cout<<"|| 1.Hiển thị danh sách đội bóng\n";
        cout<<"|| 2.Tìm kiếm đội bóng theo tên \n";
        cout<<"|| 3.Tìm kiếm đội bóng theo id \n";
        cout<<"|| 4.Tìm kiếm đội bóng theo người huấn luyện\n";
        cout<<"|| 5.Tìm kiếm đội bóng theo địa phương\n";
        cout<<"|| 6.Thêm đội bóng \n";        
        cout<<"|| 0.Quay lại menu chính\n";
        cout<<"====================  END  =======================\n";
        cout<<"Nhap lua chon : ";
        fflush(stdin);
        cin>>chon;
        cout<<"==========================================\n";
        if (chon == 1){
            FootballManager fmng;
            fmng.insert_team_from_file();
            fmng.show_all_team();
            system("pause");

        }
        else if (chon==2)
        {
            FootballManager fmng;
            string name;
            cout<<"Nhập tên đội bóng cần tìm kiếm : ";
            fflush(stdin);
            getline(cin,name);
            fmng.insert_team_from_file();
            fmng.find_team_by_name(name);
            system("pause");

        }
        else if (chon==3)
        {
            FootballManager fmng;
            string id;
            cout<<"Nhập id đội bóng cần tìm kiếm : ";
            fflush(stdin);
            getline(cin,id);
            fmng.insert_team_from_file();
            fmng.find_team_by_id(id);
            system("pause");

        }
        else if (chon == 4)
        {
            string coach;
            cout<<"Nhập tên huấn luyện viên :";
            fflush(stdin);
            getline(cin,coach);
            FootballManager fmng;
            fmng.insert_team_from_file();
            fmng.find_team_by_coach(coach);
            system("pause");
        }
        else if (chon == 5)
        {
            string location;
            cout<<"Nhập tên địa phương :";
            fflush(stdin);
            getline(cin,location);
            FootballManager fmng;
            fmng.insert_team_from_file();
            fmng.find_team_by_location(location);
            system("pause");
        }
        
        else if (chon == 6)
        {
            Team team;
            int n;
            cout<<"Nhập số đội bóng cần thêm :";
            cin>>n;
            for (int i = 0; i < n; i++)
            {
                cout<<"Nhập thông tin đội bóng thứ "<<i+1<<endl;
                team.insert_inf();
                team.insert_team_to_file();
            }
            cout<<"đã thêm xong";
            system("pause");

        }
        
        else if (chon == 0){
            break;
        }
        else
            cout<<"Lựa chọn không hợp lệ , vui lòng kiểm tra lại ";
            system("pause");

    } while (chon!=0);
    
}
void  playerManager(){
    
    int chon;
    do
    {   system("cls");
        cout<<"====================  MENU  ======================\n";
        cout<<"|| 1.Hiển thị tất cả cầu thủ\n";
        cout<<"|| 2.Tìm kiếm cầu thủ theo tên\n";
        cout<<"|| 3.Thêm cầu thủ \n";
        cout<<"|| 4.Xóa cầu thủ\n";
        cout<<"|| 0.Quay lại menu chính\n";
        cout<<"====================  END  =======================\n";
        cout<<"Nhap lua chon : ";
        fflush(stdin);
        cin>>chon;
        cout<<"==========================================\n";

    if (chon == 1){        
        FootballManager fmng;
        fmng.insertPlayerformfile();
        fmng.showallplayer();
        system("pause");
    }

    else if (chon == 2)
    {   string name;    
        FootballManager fmng;
        cout<<"Nhập tên cầu thủ cần tìm kiếm : ";
        fflush(stdin);
        getline(cin,name);
        fmng.insertPlayerformfile();
        fmng.find_player_by_name(name);
        system("pause");
    }
    else if (chon == 3)
    {
        int n; 
        cout<<"Nhập số cầu thủ cần thêm :";
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cout<<"Nhập thông tin cầu thủ thứ "<<i+1<<endl;
            Player player;
            player.insert_inf();
            player.insert_player_to_file();
        }
        cout<<"đã thêm xong ";
        system("pause");

        
    }
    else if (chon == 4){
        cout<<"Nhập cầu thủ cần xóa : //chuc nang nay chua lam";
        system("pause");
    }
    
    else if (chon == 0){
        break;
    }
    else
        cout<<"Lựa chọn không hợp lệ , vui lòng kiểm tra lại ";         
    } while (chon!=0);
}

void matchManganer(){
    int chon;
    do
    {
        system("cls");
        cout<<"====================  MENU  =======================\n";
        cout<<"|| 1.Hiển thị danh sách trận đấu\n";
        cout<<"|| 2.Tìm kiếm trận đấu theo ngày\n ";
        cout<<"|| 3.Tìm kiếm trận đấu theo nhà thi đấu\n";
        cout<<"|| 4.Tìm kiếm trận đấu theo đội bóng \n";
        cout<<"|| 0.Quay lại menu chính\n";
        cout<<"====================  END  =======================\n";
        cout<<"Nhập lựa chọn : ";
        fflush(stdin);
        cin>>chon;
        if(chon == 1){
            FootballManager fmng;
            fmng.insert_Match_from_file();
            fmng.show_all_match();
            system("pause");
        }
        else if (chon == 2)
        {
            string date;
            cout<<"Nhập ngày cần tìm kiếm(dd/mm/yyyy): ";
            fflush(stdin);
            getline(cin,date);
            FootballManager fmng;
            fmng.insert_Match_from_file();
            fmng.find_match_by_date(date);
            system("pause");
        }
        else if (chon == 3)
        {
            string nhathidau;
            cout<<"Nhập nhà thi đấu : ";
            fflush(stdin);
            getline(cin,nhathidau);
            FootballManager fmng;
            fmng.insert_Match_from_file();
            fmng.find_match_by_stadium(nhathidau);
            system("pause");
        }
        else if (chon==4)
        {
            string team;
            cout<<"Nhập tên đội bóng :";
            fflush(stdin);
            getline(cin,team);
            FootballManager fmng;
            fmng.insert_Match_from_file();
            fmng.find_match_by_team(team);
            system("pause");
        }
        else if (chon == 0){
            break;
        }
        else
            cout<<"Lựa chọn không hợp lệ , vui lòng kiểm tra lại ";         
    } while (chon!=0);
    
}
int main()
{
    int chon;
    do {
        system("cls");
        cout<<"\tPHẦN MỀM QUẢN LÝ GIẢI VÔ ĐỊCH VILE\n";
        cout<<"====================  MENU  =======================\n";
        cout<<"|| 1.Quản lý danh sách cầu thủ "<<endl;
        cout<<"|| 2.Quản lý danh sách đội bóng "<<endl;
        cout<<"|| 3.Quản lý danh sách Trận đấu "<<endl;
        cout<<"|| 0.Thoát"<<endl;
        cout<<"====================  END  =======================\n";
        cout<<"Nhập lựa chọn : ";
        fflush(stdin);
        cin>>chon;
   switch (chon)
   {
    case 1:
        playerManager();
        break;
    case 2:
        teamManager();
    case 3:
        matchManganer();
    case 0:
        break;
    default :
        printf("Lua chon khong hop le. Moi ban chon lai!");        
    }
    } while(chon!=0);
}