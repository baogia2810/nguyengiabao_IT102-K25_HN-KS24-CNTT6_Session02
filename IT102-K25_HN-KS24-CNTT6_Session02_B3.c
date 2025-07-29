#include <stdio.h>

int main() {
    int a = 10;
    int b = 4;
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a / b;

    printf("Tong = %d\n", tong);
    printf("Hieu = %d\n", hieu);
    printf("Tich = %d\n", tich);
    printf("Thuong = %.1f\n", thuong);

    return 0;
}