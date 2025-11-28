#include <stdio.h>

int main()
{
    int a = 0x604252ab; unsigned int b = 0xFFFFFFFF;
    printf("int-short:%x\n", short(a));
    printf("unsigned int-int:%i\n", int(b));
    return 0;
}

//int-short:0x52ab
//unsigned int - int:-1
//Wenn eine Variable für einen 4-Byte Datentypen in einen zwei Byte Ausdruck konvertiert werden, werden nur die niedrigen 16 Bits gespeichert
//Wenn ein unsigned int zu einem int-Ausdruck konvertiert werden, wird das int laut Zweierkomplements interpretiert.