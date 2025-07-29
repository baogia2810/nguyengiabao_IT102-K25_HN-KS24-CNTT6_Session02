#include <stdio.h>

int main() {
    // Kieu short: So nguyen 16-bit, pham vi tu -32,768 den 32,767
    short a = 100;

    // Kieu int: So nguyen 32-bit, pham vi tu -2,147,483,648 den 2,147,483,647
    int b = 1000;

    // Kieu long: So nguyen 32-bit hoac 64-bit (tuy he thong), pham vi lon hon int
    long c = 100000L;

    // Kieu long long: So nguyen 64-bit, pham vi tu -9,223,372,036,854,775,808 den 9,223,372,036,854,775,807
    long long d = 1000000000LL;

    // Kieu unsigned short: So nguyen khong dau 16-bit, pham vi tu 0 den 65,535
    unsigned short e = 50000;

    // Kieu unsigned int: So nguyen khong dau 32-bit, pham vi tu 0 den 4,294,967,295
    unsigned int f = 3000000U;

    // Kieu unsigned long: So nguyen khong dau 32-bit hoac 64-bit (tuy he thong), pham vi lon hon unsigned int
    unsigned long g = 4000000UL;

    // Kieu unsigned long long: So nguyen khong dau 64-bit, pham vi tu 0 den 18,446,744,073,709,551,615
    unsigned long long h = 8000000000ULL;

    // Kieu char: Ky tu hoac so nguyen 8-bit, pham vi tu -128 den 127 (neu signed) hoac 0 den 255 (neu unsigned)
    char i = 'A';

    return 0;
}
