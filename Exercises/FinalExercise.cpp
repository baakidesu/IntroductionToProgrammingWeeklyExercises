#include <iostream>
#include <ostream>

void Increment(int &x) {
    x++;
}

void PtrIncrement(int *x) {
    (*x)++;
}

int main(){

    int a = 4;
    int *ptr = &a;

    std::cout << a << std::endl;
    Increment(*ptr);
    std::cout << a << std::endl;
    PtrIncrement(ptr);
    std::cout << a << std::endl;


    return 0;
}
