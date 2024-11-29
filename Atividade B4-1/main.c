/*------------------------------------------------------------------------*/
/*   FATEC - São Caetano do Sul                 Estrutura de Dados        */
/*                                                                        */
/*                           Murilo Bastos                                */
/*      Objetivo: Aprender os conceitos Bubble Sort e implementação       */
/*                                                                        */
/*                                                       Data: 20/10/2024 */
/*------------------------------------------------------------------------*/

#include <stdio.h>

// Função para ordenar o array usando Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Solicitar a quantidade de elementos
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    // Criar o array com base no tamanho fornecido pelo usuário
    int arr[n];

    // Receber os números do usuário
    printf("Digite os numeros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Mostrar o array original
    printf("Array original: \n");
    printArray(arr, n);

    // Ordenar o array usando Bubble Sort
    bubbleSort(arr, n);

    // Mostrar o array ordenado
    printf("Array ordenado: \n");
    printArray(arr, n);

    return 0;
}
