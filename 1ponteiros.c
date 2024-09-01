#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//variaveis e memoria

/*
uma variavel é um espaço na memoria reservado para armazenar um tipo de dado ela deve ter:
um nome
um tipo
um valor
um endereço de memoria
um tamanho para alocação
*/

int variavel = 1; //um variavem inteira do tipo c, 
int *ponteiro = &variavel; // - um pontero para o endereço de memoria da variavel
/*
- Ponteiros são tipos de dados que referenciam um endereço para uma região na memoria que guarda uma variavel 
- a linguagem vai alocar a variavel no primeiro endereço de memoria disponivel e cada tipo de variavel oculpa uma quantidade de espaço na memoria 
- quando um computador passa o endereço de memória de uma variável, ele normalmente se refere ao endereço do primeiro byte da memória onde a variável está armazenada.
- Todo o ponteiro que guarda endereço de memoria ocupa 8 bytes de memoria em computador de 64 bits
*/

/*
- com os dados atribuidos às variaveis podemos realizar operações matematicas, logicas e de atribuição com os operadores da linguagem
*/

int main (){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int i = 0;

    printf("variavel: %d\nendereço de memoria de variavel: %p\n", variavel, (void*)ponteiro);
    //o endereço de memoria é apresentado em um valor hexadecimal

    int *ponteiro_nulo = NULL; //um ponteiro que não aponta para nada, uma boa pratica
    // o asterisco serve para declarar um ponteiro e acessar um conteudo em uma regição da memoria
    printf("endereço armazenado no ponteiro: %p\nconteudo armazenado no endereço: %d\n\n", ponteiro, *ponteiro);

    ponteiro = &variavel;
    int **ponteiro_do_ponteiro = &ponteiro; //um ponteiro para um ponteiro do tipo inteiro

    printf("conteudo armazenado no endereço armazenado no ponteiro: %d\n", variavel);
    printf("endereço armazenado no ponteiro: %p\n", ponteiro);
    printf("endereço do ponteiro: %p\n", &ponteiro);
    printf("endereço armazenado no ponteiro do ponteiro: %p\n", ponteiro_do_ponteiro);


    return 0;

}