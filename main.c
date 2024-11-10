#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime_histograma(int* vendas[],int num_categorias);
void imprime_linha(int *venda);

int main(){
    int qtd, i;
    scanf("%d",&qtd);

    getchar();
    
    if(qtd == 0){
        printf("vazio");
        return 0;
    }

    int **vetor = (int**)malloc(qtd * sizeof(int*));

    for (i = 0; i < qtd; i++)
    {
        vetor[i] = (int*)malloc(qtd * sizeof(int));
    }

    for (i = 0; i < qtd; i++)
    {
        scanf("%d",vetor[i]);
    }

    imprime_histograma(vetor,qtd);

    for (i = 0; i < qtd; i++)
    {
        free(vetor[i]);
    }

    free(vetor);

    return 0;
}

void imprime_histograma(int *vendas[],int num_categorias){
    int i;
    for(i = 0;i < num_categorias;i++){
        imprime_linha(vendas[i]);
    }
}

void imprime_linha(int *venda){
    int i;
    printf("%d ",*venda);
    for(i = 0; i < *venda;i++){
        printf("*");
    }
    printf("\n");
}