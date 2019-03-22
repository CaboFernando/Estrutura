#include <stdio.h>

int vetor[10], menor = 0, maior = 0, media = 0, positivo = 0, negativo = 0;

void calc(){
    for(int i=0; i<10; i++){
        scanf("%d",&vetor[i]);

        media = vetor[i];
        if(vetor[i] < menor)
            menor = vetor[i];
        if(vetor[i] > maior) 
            maior = vetor[i];
        if(vetor[i] > 0)
            positivo += vetor[i];
        if(vetor[i] < 0)
            negativo += vetor[i];
    }
    media = media/10;

    printf("Menor número do vetor: %d",menor);
    printf("Maior número do vetor: %d",maior);
    printf("Soma dos números positivos: %d",positivo);
    printf("Soma dos números negativos: %d",negativo);
    printf("Média dos números do vetor: %d", media);
}

int main(){
    calc();

}