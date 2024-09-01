#include <stdio.h>

int main() {
    // Variáveis de tipos básicos
    char charVar;
    short shortVar;
    int intVar;
    long longVar;
    float floatVar;
    double doubleVar;
    long double longDoubleVar;

    // Ponteiros para os tipos básicos
    char *charPtr;
    short *shortPtr;
    int *intPtr;
    long *longPtr;
    float *floatPtr;
    double *doublePtr;
    long double *longDoublePtr;

    // Exibindo tamanhos das variáveis
    printf("Tamanhos das variáveis:\n");
    printf("char: %zu bytes\n", sizeof(charVar));
    printf("short: %zu bytes\n", sizeof(shortVar));
    printf("int: %zu bytes\n", sizeof(intVar));
    printf("long: %zu bytes\n", sizeof(longVar));
    printf("float: %zu bytes\n", sizeof(floatVar));
    printf("double: %zu bytes\n", sizeof(doubleVar));
    printf("long double: %zu bytes\n", sizeof(longDoubleVar));
    /*
    variaveis de tipos diferentes ocupam espaços diferentes na memoria
    */

    // Exibindo tamanhos dos ponteiros
    printf("\nTamanhos dos ponteiros:\n");
    printf("char*: %zu bytes\n", sizeof(charPtr));
    printf("short*: %zu bytes\n", sizeof(shortPtr));
    printf("int*: %zu bytes\n", sizeof(intPtr));
    printf("long*: %zu bytes\n", sizeof(longPtr));
    printf("float*: %zu bytes\n", sizeof(floatPtr));
    printf("double*: %zu bytes\n", sizeof(doublePtr));
    printf("long double*: %zu bytes\n", sizeof(longDoublePtr));
    /*
    os ponteiros ocupam a mesma qunatidade de espaço na memoria
    */
    return 0;
}
