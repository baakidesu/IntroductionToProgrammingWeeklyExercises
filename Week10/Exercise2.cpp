//Write a program that gets two matrices of size 3x3 consisting ofdouble elements.
//The program will add the matrices, and display the resulting matrix.

#include <iostream>

int main() {

    double matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    double matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    double sumMatrix[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            std::cout << sumMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}