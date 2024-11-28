#include <boost/filesystem.hpp>
#include <iostream>

int main() {
    namespace fs = boost::filesystem;

    try {
        // Get the current directory
        fs::path current_dir = fs::current_path();

        std::cout << "Current directory: " << current_dir.string() << std::endl;
        std::cout << "Files in directory:" << std::endl;

        // Iterate through the directory and print file names
        for (const auto& entry : fs::directory_iterator(current_dir)) {
            std::cout << "  " << entry.path().filename().string() << std::endl;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}