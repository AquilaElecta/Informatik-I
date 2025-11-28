#include <stdio.h>

int main()
{
    printf("Größe der Datentypen:\n");
    printf("short:%zu Byte\n", sizeof(short));
    printf("int:%zu Byte\n", sizeof(int));
    printf("unsigned int:%zu Byte\n", sizeof(unsigned int));
    printf("long:%zu Byte\n", sizeof(long));
    printf("long long:%zu Byte\n", sizeof(long long));
    printf("size_t:%zu Byte\n", sizeof(size_t));
    return 0;
}

//Größe der Datentypen:
//short:2 Byte
//int : 4 Byte
//unsigned int : 4 Byte
//long : 4 Byte
//long long : 8 Byte
//size_t : 8 Byte