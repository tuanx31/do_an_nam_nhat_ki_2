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
    void addTeam(Team team)
    {
        list_team.push_back(team);
    }
    void addMatch(Match match)
    {
        list_match.push_back(match);
    }
    void insertPlayerformfile();
    void find_player_by_name(string name);
    void showallplayer();
    void removeTeam();
    void find_team_by_name();
    void get_list_of_teams();
    void add_team_fromfile();
    void add_Match_from_file();
};

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
void quanlydanhsachdoibong(){
    
}
void  playermanager(){
    string name;
    
    int chon;
    do
    {   system("cls");
        cout<<"=============  MENU  ==================\n";
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
    {
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
        
    }
    else if (chon == 4){
        cout<<"Nhập cầu thủ cần xóa : ";
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
        cout<<"Chào mừng đến với phần mềm quản lí giải vô địch VILE\n";
        cout<<"====================  MENU  =======================\n";
        cout<<"|| 1.Quản lý danh sách cầu thủ "<<endl;
        cout<<"|| 2.Quản lý danh sách đội bóng "<<endl;
        cout<<"|| 0.Thoát"<<endl;
        cout<<"====================  END  =======================\n";
        cout<<"Nhập lựa chọn : ";
        fflush(stdin);
        cin>>chon;
   switch (chon)
   {
    case 1:
        playermanager();
        break;   
    case 0:
        break;
    default :
        printf("Lua chon khong hop le. Moi ban chon lai!");
        
    }
    } while(chon!=0);
}