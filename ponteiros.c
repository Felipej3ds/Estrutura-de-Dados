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
- a linguagem vai alocar a variavel no primeiro endereço de memoria disponivel e cada tipo de variavel oculpa uma quantidade de espaçoo na memoria 
- quando um computador passa o endereço de memória de uma variável, ele normalmente se refere ao endereço do primeiro byte da memória onde a variável está armazenada.
*/

/*
com os dados atribuidos às variaveis podemos realizar operações matematicas, logicas e de atribuição com os operadores da linguagem
*/

int main (){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int i;

    printf("variavel: %d\nendereço de memoria de variavel: %p\n", variavel, &variavel);
    //o endereço de memoria é apresentado em um valor hexadecimal

}