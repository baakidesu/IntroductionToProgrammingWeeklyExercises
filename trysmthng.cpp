
#include <cstdio>

int factorial(int n) {
    int result = 1;

    if (n == 0) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;

}

int main() {
    int number = factorial(0);

    return 0;
}