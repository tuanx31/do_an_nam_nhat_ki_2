#include <iostream>
#include <fstream>
#include <vector>
#include "csv.h"

int main() {
    // Tạo dữ liệu mẫu
    std::vector<std::vector<std::string>> data = {
        {"Header 1", "Header 2", "Header 3"},
        {"Value 1", "Value 2", "Value 3"},
        {"Value 4", "Value 5", "Value 6"}
    };

    // Mở tệp CSV để ghi
    std::ofstream csvFile("data.csv");

    // Tạo đối tượng CSV Writer
    csv::Writer writer(csvFile);

    // Tắt chế độ tự động định dạng ô
    writer.configure_dialect().quote_none();

    // Ghi dữ liệu vào tệp CSV
    for (const auto& row : data) {
        writer.write_row(row);
    }

    // Đóng tệp CSV
    csvFile.close();

    std::cout << "Tệp CSV đã được lưu." << std::endl;

    return 0;
}
