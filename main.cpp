#include <iostream>
#include <math.h>
#define TAM 1000000

void shellSort(int vetor[], int tamanho)
{
  int k = 0;
  int gap = 0;
  
  while(gap <= tamanho){
    if(k == 0)
      gap = 1;
    else
      gap = pow(4, k) + 3 * pow(2, k-1) + 1;
    k++;
  }

  while(k >= 0){
    for (int i = gap; i < tamanho; i++) {
      int temp = vetor[i];
      int j;
      for (j = i; j >= gap && vetor[j - gap] > temp; j -= gap)
        vetor[j] = vetor[j - gap];
      vetor[j] = temp;  
    } 
    k--;
    if(k == 0)
      gap = 1;
    else
      gap = pow(4, k) + 3 * pow(2, k-1) + 1;
  } 
}

int main() {
  int vet[TAM];

  for(int i = 0; i < TAM; i++){
    vet[i] = rand()%1000;
  }

  shellSort(vet, TAM);

  for(int i = 0; i < TAM; i++)
    printf("%d \n", vet[i]);

  return 0;
}