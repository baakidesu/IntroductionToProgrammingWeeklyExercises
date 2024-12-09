//Write a function that takes in two integers and finds the maximum of them.

#include <iostream>

int FindMax(int num1, int num2) {

    if(num1>=num2) {
        return num1;
    }else{
        return num2;
    }
}

int main() {

    int a,b;

    std::cout<<"Please enter two numbers\n";
    std::cin>>a;
    std::cin>>b;

    std::cout<<FindMax(a,b)<<" is greater.";

    return 0;
}
