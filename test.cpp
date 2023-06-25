#include <iostream>
#include <iomanip> // Để sử dụng hàm setw()
#include <vector>  // Để sử dụng vector

class DoiBong {
public:
    std::string id;
    std::string tenDoiBong;
    std::string diaPhuong;
    std::string huanLuyenVien;
};

int main() {
    std::vector<DoiBong> danhSachDoiBong;

    // Thêm dữ liệu vào danh sách
    DoiBong doi1;
    doi1.id = "D1";
    doi1.tenDoiBong = "Doi1";
    doi1.diaPhuong = "Nghe An";
    doi1.huanLuyenVien = "nguyen a";
    danhSachDoiBong.push_back(doi1);

    DoiBong doi2;
    doi2.id = "D2";
    doi2.tenDoiBong = "Doi2";
    doi2.diaPhuong = "Nghe An";
    doi2.huanLuyenVien = "nguyen b";
    danhSachDoiBong.push_back(doi2);

    // In danh sách dưới dạng bảng
    std::cout << "Nhap lua chon: 1\n";
    std::cout << "=============================================================\n";
    std::cout << std::setw(8) << "Id" << std::setw(24) << "Tên đội bóng" << std::setw(20) << "Địa phương" << std::setw(24) << "Huấn luyện viên" << std::endl;
    std::cout << "=============================================================\n";

    for (const auto& doiBong : danhSachDoiBong) {
        std::cout << std::setw(8) << doiBong.id << std::setw(15) << doiBong.tenDoiBong << std::setw(17) << doiBong.diaPhuong << std::setw(15) << doiBong.huanLuyenVien << std::endl;
    }
    std::cout << "=====================================\n";

    return 0;
}
