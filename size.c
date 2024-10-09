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

    printf("%ld\n", sizeof(int64_t));
    printf("%ld\n", sizeof(int64_t));

    printf("%ld\n", sizeof(int));

    char c = 128;
    int32_t i = 32;
    char c2 = c + 1;

    printf("sizeof(c): %ld\n", sizeof(c));
    printf("sizeof(i): %ld\n", sizeof(i));
    printf("sizeof(c * 4000): %ld\n", sizeof(c * 4000));
    printf("sizeof(c + 1): %ld\n", sizeof(c + 1));
    printf("sizeof(c2): %ld\n", sizeof(c2));


}