#include <iostream>
#include <vector>
#include <string>

int main() {
    // Create a 2D vector of strings
    std::vector<std::vector<std::string>> matrix;

    // Populate the matrix with strings
    matrix.push_back({"A", "B", "C"});
    matrix.push_back({"D", "E", "F"});
    matrix.push_back({"G", "H", "I"});

    // Access individual elements
    std::cout << matrix[0][1] << std::endl;  // Output: "B"
    std::cout << matrix[1][2] << std::endl;  // Output: "F"

    return 0;
}