#include <stdio.h> //funções passagem de parametro por valores e por referencias 

//Funções são blocos de comando que podem ou não retornar um valor ao final de sua execução
/*
tipo funcao(tipo param1, tipo param2){

    comandos...

    return valor;
}
*/

/* OBS: 
o valor retornado deve ser do mesmo tipo da função declarada
funções não podem ser declaradas dentro de funções
funções podem ter um tipo e retornar um valor do tipo declarado
funções em linguagem c devem ter nomes diferentes
podemos passar argumentos por referencia(passamos um endereço da variavel) ou por valor(copia)
*/
void imprime_vector(const int *vector); //a função const impossibilita a função de alterar o valor apontado pelo ponteiro OBS(uma boa pratica)

int soma_copia(int i, int j); //um prototipo de uma função, argumento passado por valor(copia)
void soma_referencia(int *a, int *b, int *z);//um prototipo de uma função, argumento passado por referencia (endereço)

int main (){
    int a = 1;
    int b = 1;
    int z = soma_copia(a,b);
    soma_referencia(&a, &b, &z);

    printf("variaveis da main\n\n");
    printf("&a = %p\na = %d\n", &a, a);
    printf("&b = %p\nb = %d\n", &b, b);   
    printf("&z = %p\nz = %d", &z, z);

    imprime_vector(&a);

}

int soma_copia(int a, int b){ //argumentos passado por cópia
    printf("variaveis da funcao com agumentos passados por copia\n\n");
    printf("&a = %p\na = %d\n", &a, a);
    printf("&b = %p\nb = %d\n", &b, b);
    int z = a + b;
    printf("&z = %p\nz = %d", &z, z);
    printf("\n\n");
    return(z);
}
/*
quando passamos um argumento por valor é criado uma cópia dos valores passados durante a execução da função, após a execução da função a memoria alocada para as cópias são liberadas 
*/

void soma_referencia(int *a, int *b, int *z){

    *z = *a + *b;
    printf("\nvariaveis da funcao com agumentos passados por referencia\n\n");
    printf("&a = %p\n", a);
    printf("a = %d\n", *a);
    printf("&b = %p\n", b);
    printf("b = %d\n", *b);
    printf("&z = %p\n", z);
    printf("z = %d\n\n", *z);

}//como passamos o endereço das variaveis como argumento ao modificar o conteudo do endereço as modificações são feitas diretamente nas variaveis passadas para a função
