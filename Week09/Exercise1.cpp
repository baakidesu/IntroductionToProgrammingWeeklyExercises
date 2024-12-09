//Write a C++ program that simulates a “dice-throwing” experiment.

//The program will generate a random value between 1 and 6 for 1000 times (i.e.,the experiment will be repeated 1000 times)

//When the execution of the program finishes,
//write on screen the frequencies of appearance for each of the numbers on the dice: 1, 2,3, 4, 5, 6.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int number = 0;
    int rollResults[6] = {0};
    srand(time(nullptr));

    for (int i = 1; i <= 1000; i++) {
        number = rand() % 6 + 1;
        rollResults[number-1] += 1;
    }

    std::cout << "1 appeared " << rollResults[0] << " times" << std::endl;
    std::cout << "2 appeared " << rollResults[1] << " times" << std::endl;
    std::cout << "3 appeared " << rollResults[2] << " times" << std::endl;
    std::cout << "4 appeared " << rollResults[3] << " times" << std::endl;
    std::cout << "5 appeared " << rollResults[4] << " times" << std::endl;
    std::cout << "6 appeared " << rollResults[5] << " times" << std::endl;


    return 0;
}
