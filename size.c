#include <stdint.h>
#include <stdio.h>

int main() {   

    printf("%ld\n", sizeof(char));

    printf("%ld\n", sizeof(int8_t));
    printf("%ld\n", sizeof(uint8_t));

    printf("%ld\n", sizeof(int16_t));
    printf("%ld\n", sizeof(uint16_t));

    printf("%ld\n", sizeof(int32_t));
    printf("%ld\n", sizeof(uint32_t));

    printf("%ld\n", sizeof(int));

    char c = 128;
    int32_t i = 32;

    printf("sizeof(c): %ld\n", sizeof(c));
    printf("sizeof(i): %ld\n", sizeof(i));

    int32_t max32signed = 2147483647;
    printf("%d + 1 = %d\n", max32signed, max32signed + 1);
    printf("%d + 10000 = %d\n", max32signed, max32signed + 10000);

    uint32_t max32usigned = 2147483647;
    printf("%d + 1 = %d\n", max32usigned, max32usigned + 1);
    printf("%d + 10000 = %d\n", max32usigned, max32usigned + 10000);
}