#include <iostream>
#include <fstream>
int main() {
    std::ofstream outfile("output.txt");
    if (!outfile) {
        std::cout << "Error opening file!" << std::endl;
        return 1;
    }
    std::string line;
    std::cout << "Enter text (type 'end' to finish):\n";
    while (true) {
        std::getline(std::cin, line);
        if (line == "end")
            break;
        outfile << line << std::endl;
    }
    outfile.close();
    std::cout << "Data saved to output.txt\n";
    return 0;
}
