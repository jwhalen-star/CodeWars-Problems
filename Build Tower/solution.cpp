#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
    std::vector<std::string> result;
    for (int i = 0; i < nFloors; i++) {
        int spaces = nFloors - i - 1;   // Counting down from nFloors - 1 number of spaces
        int stars = 2 * i + 1;          // The next consecutive odd number of star
        std::string row = std::string(spaces, ' ') + std::string(stars, '*') + std::string(spaces, ' ');
        result.push_back(row);
    }
  return result;
}