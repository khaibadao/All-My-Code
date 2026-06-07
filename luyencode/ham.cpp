#include <iostream>
#include <fstream>
#include <string>

int main() {
    const std::string path = "C:\\Users\\lykha\\AppData\\Roaming\\Sublime Text\\Packages\\User\\example.inp";
    
    std::ifstream inputFile(path);
    if (!inputFile) {
        std::cerr << "Không thể mở file tại: " << path << '\n';
        return 1;
    }
    std::cout << "Đọc file thành công tại: " << path << '\n';

    // Xử lý nội dung file...
    std::string line;
    while (std::getline(inputFile, line)) {
        std::cout << line << '\n';
    }

    return 0;
}
