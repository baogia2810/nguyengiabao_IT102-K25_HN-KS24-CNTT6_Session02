#include <stdio.h>

int main() {
    int number = 12345;
    int tong = 0;
    tong += number % 10;
    number /= 10;
    tong += number % 10;
    number /= 10;
    tong += number % 10;
    number /= 10;
    tong += number % 10;
    number /= 10;
    tong += number % 10;

    printf("Tong cac chu so = %d\n", tong);

    return 0;
}