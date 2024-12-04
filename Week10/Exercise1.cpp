//Write a program that gets the midterm, project, and final scores of 10 students from the user

//The midterm, project, and final will be weighted by 30%, 30%, and %40, respectively.
//Accordingly, compute the final weighted scores of all students.

//Suppose that minimum passing score is the average of final scores.
//So, display the final score of each student along with the passing information.

#include <iostream>

std::string IsPassed(float passScore, float studentScore){
    if (studentScore >= passScore) {
        return " passed the exam.";
    }else {
        return " NOT passed the exam.";
    }
}

int main() {
    float grades[3][3] = {0};
    float averages[3][5] = {0};  //second dimension is 5 because of guarantee that we won't have exception.

    float lastStep[3] = {0};

    float passScore = 0;

    for (int i = 0; i < 3; i++) { //take grades
        for (int j = 0; j < 3; j++) {
            switch (j) {
                case 0: // midterm
                    std::cout << "Enter midterm grade for " << i + 1 << "th student: ";
                    std::cin >> grades[i][j];
                    //std::cout << std::endl;

                    averages[i][j] = (grades[i][j] * 30)/100;
                break;

                case 1: // project
                    std::cout << "Enter project grade for " << i + 1 << "th student: ";
                    std::cin >> grades[i][j];
                    //std::cout << std::endl;

                    averages[i][j] = (grades[i][j] * 30)/100;
                break;

                case 2: // final
                    std::cout << "Enter final grade for " << i + 1 << "th student: ";
                    std::cin >> grades[i][j];
                    //std::cout << std::endl;

                    averages[i][j] = (grades[i][j] * 40)/100;
                break;

                default:
                    std::cout << "!!!SOMETHING WRONG!!!";
            }
        }
        std::cout << "--------------------------------" << std::endl;
    }

    for (int i = 0; i < 3; i++) {
        averages[i][4] = averages[i][0] + averages[i][1] + averages[i][2];
        lastStep[i] = averages[i][4];
    }

    for (float i : lastStep) {
        passScore += i;
    }

    passScore /= 3;

    for (int i = 0; i < 3; i++) {
        std::cout << i+1 << "th final score is " << averages[i][4] << " and have " << IsPassed(passScore, averages[i][4]);
        std::cout << std::endl;
    }

    return 0;
}


