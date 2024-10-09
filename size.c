#include <stdint.h>
#include <stdio.h>

void print_as_bin(char c) {
    for(int place = 128; place > 0; place /= 2) {
        if((c & place) == 0) printf("0");
        else printf("1");
    }
}


int main() {   
    printf("sizeof(char): %ld\n", sizeof(char));

    printf("sizeof(int8_t): %ld\n", sizeof(int8_t));
    printf("sizeof(uint8_t): %ld\n", sizeof(uint8_t));

    printf("sizeof(int16_t): %ld\n", sizeof(int16_t));
    printf("sizeof(uint16_t): %ld\n", sizeof(uint16_t));

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


    char s = 200;
    unsigned char u = 200;

    printf("s: ");
    print_as_bin(s);
    printf(" u: ");
    print_as_bin(u);
    printf("\n");

    printf("s as hhx: %hhx u as hhx: %hhx\n", s, u);
    printf("s as x: %x u as x: %x\n", s, u);

    printf("s < 127: %d u < 127: %d\n", s > 127, u > 127);

}