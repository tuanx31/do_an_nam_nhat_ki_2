#include "Team.h"
#include "Player.h"
#include "Match.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;
class FootballManager
{
private:
    vector<Team> list_team;
    vector<Match> list_match;

public:
    void addTeam(Team team)
    {
        list_team.push_back(team);
    }
    void addMatch(Match match)
    {
        list_match.push_back(match);
    }
    void removeTeam();
    void find_team_by_name();
    void get_list_of_teams();
    void add_team_fromfile();
    void add_Match_from_file();
};
void FootballManager::add_team_fromfile()
{
    vector<string> input;
    ifstream read_team("Team.txt");
    getline(read_team, input[0]);
    vector<string> elements;
    stringstream ss(input[0]);
    string item;

    while (getline(ss, item, '|'))
    {
        elements.push_back(item);
    }
    Team team(elements[0], elements[1], elements[2]);
    addTeam(team);
    read_team.close();
}
void FootballManager::add_Match_from_file()
{
    vector<string> input;
    ifstream read_match("Match.txt");
    getline(read_match, input[0]);
    vector<string> elements;
    stringstream ss(input[0]);
    string item;

    while (getline(ss, item, '|'))
    {
        elements.push_back(item);
    }
    Match match(elements[0], elements[1], elements[2], elements[3], elements[4]);
    addMatch(match);
    read_match.close();
}
int main()
{
}
