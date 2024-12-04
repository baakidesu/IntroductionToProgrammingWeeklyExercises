//Write a program that gets two matrices of size 3x2 and 2x4,respectively.
//The program will multiply and display the resulting matrix.

#include <iostream>

int main() {
    int matrix[3][2] = {0};
    int matrix2[2][4] = {0};

    int multiplyMatrix[3][4] = {0};

    std::cout << "This is the first matrix, it is 3X2" << std::endl; // get matrix 1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "Enter " << j+1 << "th element of column " << i+1 << ": ";
            std::cin >> matrix[i][j];
            std::cout << std::endl;
        }
    }
    std::cout << "--------" << std::endl;

    std::cout << "This is the first matrix, it is 2X+" << std::endl; // get matrix 2
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Enter " << j+1 << "th element of column " << i+1 << ": ";
            std::cin >> matrix[i][j];
        }
    }

    return 0;
}