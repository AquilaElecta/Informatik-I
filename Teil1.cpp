#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int mult(int a, int b)
{
    return a * b;
}
int main()
{
    int parameter1, parameter2;
    printf("Geben Sie die zwei Parameter ein\n");
    scanf("%d%d", &parameter1, &parameter2);
    printf("Ergebnis zum Addieren:%d\n", add(parameter1, parameter2));
    printf("Ergebnis zum Multiplizieren:%d\n", mult(parameter1, parameter2));
    return 0;
}