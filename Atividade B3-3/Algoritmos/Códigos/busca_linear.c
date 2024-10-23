/*------------------------------------------------------------------------*/
/*   FATEC - São Caetano do Sul                 Estrutura de Dados        */
/*                                                                        */
/*                           Murilo Bastos                                */
/*                Objetivo: Busca Linear (linear_search)                  */
/*                                                                        */
/*                                                       Data: 22/10/2024 */
/*------------------------------------------------------------------------*/

// linear_search.c
#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) { // tn
        if (arr[i] == target) { // 2tn
            return i;  // Encontrado  // t 
        }
    }
    return -1;  // Não encontrado  // t
}

int main() { 
    int arr[] = {1, 2, 3, 4, 5}; // t 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3; // t
    int result = linear_search(arr, size, target);
    if (result != -1) {
        printf("Elemento encontrado no índice %d\n", result); // t + algoritmo
    } else {
        printf("Elemento não encontrado\n"); // t
    }
    return 0;
}

// Busca Linear - 4tn + 6t 
