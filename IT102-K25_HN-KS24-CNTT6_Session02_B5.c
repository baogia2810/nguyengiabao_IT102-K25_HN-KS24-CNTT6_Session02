#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    float c = 3.5;
    float tong = a + b + c;
    int tongPhanNguyen = (int)a + (int)b + (int)c;

    printf("Tong = %.2f\n", tong);
    printf("Tong phan nguyen = %d\n", tongPhanNguyen);

    return 0;
}