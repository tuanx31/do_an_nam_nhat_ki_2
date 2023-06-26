#include <iostream>
#include <vector>
#include <string>

class Match {
public:
    std::string tenDoi1;
    std::string tenDoi2;
    int diemDoi1;
    int diemDoi2;

    Match(const std::string& ten1, const std::string& ten2, int diem1, int diem2)
        : tenDoi1(ten1), tenDoi2(ten2), diemDoi1(diem1), diemDoi2(diem2) {}
};

int main() {
    std::vector<Match> matches;

    // Thêm thông tin các trận đấu vào vector matches
    matches.push_back(Match("Doi1", "Doi2", 3, 0));
    matches.push_back(Match("Doi1", "Doi3", 3, 0));
    matches.push_back(Match("Doi1", "Doi4", 1, 1));

    // Tính tổng điểm cho các đội bóng
    std::vector<std::string> teamNames;
    std::vector<int> teamPoints;

    for (const auto& match : matches) {
        // Xử lý đội 1
        int team1Index = -1;
        for (size_t i = 0; i < teamNames.size(); ++i) {
            if (teamNames[i] == match.tenDoi1) {
                team1Index = i;
                break;
            }
        }

        if (team1Index == -1) {
            teamNames.push_back(match.tenDoi1);
            teamPoints.push_back(match.diemDoi1);
        } else {
            teamPoints[team1Index] += match.diemDoi1;
        }

        // Xử lý đội 2
        int team2Index = -1;
        for (size_t i = 0; i < teamNames.size(); ++i) {
            if (teamNames[i] == match.tenDoi2) {
                team2Index = i;
                break;
            }
        }

        if (team2Index == -1) {
            teamNames.push_back(match.tenDoi2);
            teamPoints.push_back(match.diemDoi2);
        } else {
            teamPoints[team2Index] += match.diemDoi2;
        }
    }

    // In ra tổng điểm của các đội bóng
    for (size_t i = 0; i < teamNames.size(); ++i) {
        std::cout << "Đội " << teamNames[i] << ": " << teamPoints[i] << " điểm" << std::endl;
    }

    return 0;
}
