#include <stdio.h>

//int main() {
//    unsigned int i = 1;
//
//    char array[100];
//    unsigned int result = i<<2;
//    printf("Hello, World!\n");
//    printf( "%d \n", i);
//    printf( "hello  %d", array);
//    return 0;
//}
#include <stdio.h>
typedef union {
    unsigned long l;
    unsigned char c[4];
} EndianTest;
int main() {
    EndianTest et;
    et.l = 0x12345678;
    printf("order");
    if (et.c[0] == 0x78 && et.c[1] == 0x56 && et.c[2] == 0x34 && et.c[3] == 0x12) {
        printf("Little Endian\n");
//        printf(et.l);
//        printf(et.c);
//        printf("\n");
    } else if (et.c[0] == 0x12 && et.c[1] == 0x34 && et.c[2] == 0x56 && et.c[3] == 0x78) {
        printf("Big Endiann");
    } else {
        printf("Unknown Endiann");
    }
    printf("0x%lX ordedr：n", et.l);
    for (int i = 0; i < 4; i++) {
        printf("%p : 0x%02Xn", &et.c[i], et.c[i]);
    }
    return 0;
}