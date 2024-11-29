/*------------------------------------------------------------------------*/
/*   FATEC - São Caetano do Sul                 Estrutura de Dados        */
/*                                                                        */
/*                           Murilo bastos                                */
/*      Objetivo: Aprender os conceitos Bubble Sort e implementação       */
/*                                                                        */
/*                                                       Data: 20/10/2024 */
/*------------------------------------------------------------------------*/

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int trocado; // Flag para indicar se houve troca
    for (i = 0; i < n-1; i++) {
        trocado = 0; // Reseta a flag
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                trocado = 1; // Marca que houve troca
            }
        }
        // Se não houve trocas, interrompe o loop
        if (trocado == 0) {
            break;
        }
    }
}
