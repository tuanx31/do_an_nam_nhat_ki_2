#include <iostream>
#include <iomanip>
#include <vector>

struct Match {
    std::string date;
    std::string stadium;
    std::string team1;
    std::string team2;
    std::string score;
};

void displayMatches(const std::vector<Match>& matches) {
    std::cout<<"======================================================================\n";
    std::cout << std::left << std::setw(19) << "Ngày thi đấu"
              << std::setw(24) << "Sân thi đấu"
              << std::setw(18) << "Đội 1"
              << std::setw(17) << "Đội 2"
              << "Tỉ số" << std::endl;
    
    for (const Match& match : matches) {
        std::cout << std::setw(15) << match.date
                  << std::setw(20) << match.stadium
                  << std::setw(15) << match.team1
                  << std::setw(15) << match.team2
                  << match.score << std::endl;
    }
}

int main() {
    std::vector<Match> matches = {
        {"20/12/2022", "Svd My Dinh", "Doi 1", "Doi 2", "2-1"},
        {"22/03/2023", "Svd Nghe An", "Doi1", "Doi3", "2-1"}
    };

    displayMatches(matches);

    return 0;
}
