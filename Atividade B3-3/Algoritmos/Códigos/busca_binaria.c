/*------------------------------------------------------------------------*/
/*   FATEC - São Caetano do Sul                 Estrutura de Dados        */
/*                                                                        */
/*                           murilo bastos                                */
/*                Objetivo: Busca Binária (binary_search)                 */
/*                                                                        */
/*                                                       Data: 22/10/2024 */
/*------------------------------------------------------------------------*/

// binary_search.c
#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1; // 2t
    while (left <= right) { // t (log n)  
        int mid = left + (right - left) / 2; // 4t (log n)
        if (arr[mid] == target) { // 2t (log n)
            return mid;  // Encontrado  // t
        }
        if (arr[mid] < target) { //2t (log n)
            left = mid + 1; //2t (log n)
        } else {
            right = mid - 1; //2t (log n)
        }
    }
    return -1;  // Não encontrado // t 
}


int main() {
    int arr[] = {1, 2, 3, 4, 5}; // t 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4; // t
    int result = binary_search(arr, size, target);
    if (result != -1) {
        printf("Elemento encontrado no índice %d\n", result); // t + algoritmo 
    } else {
        printf("Elemento não encontrado\n"); // t 
    }
    return 0;
}

// Busca Binária - 11t(log₂(n)) + 8t
