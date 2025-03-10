#include <iostream>

int main() {

    char str1[50];

    char *ptr1 = str1;
    char *ptr2 = str1;

    std::cin >> str1;
    std::cout << std::endl;

    while (*ptr2 != '\0') {
        ptr2++;
    }
    ptr2--;

    while(ptr2 > ptr1) {
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }

    std::cout << std::endl<<str1;

    return 0;
}