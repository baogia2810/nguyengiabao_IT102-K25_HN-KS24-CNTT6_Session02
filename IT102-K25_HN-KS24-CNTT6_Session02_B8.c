#include <stdio.h>

int main() {
    int number = 12345;
    int result = 0;
    result = result * 10 + (number % 10);
    number /= 10;
    result = result * 10 + (number % 10);
    number /= 10;
    result = result * 10 + (number % 10);
    number /= 10;
    result = result * 10 + (number % 10);
    number /= 10;
    result = result * 10 + (number % 10);

    printf("So dao nguoc = %d\n", result);

    return 0;
}