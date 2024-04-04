#include <stdio.h>

void ascendente(int notas[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (notas[j] > notas[j+1]) {
                temp = notas[j];
                  notas[j] = notas[j+1];
                  notas[j+1] = temp;
            }
        }
    }
}

int ordenar(int *nota, int n) {
    int maior = *nota;
  
      for (int i = 1; i < n; i++) {
        if (*(nota + i) > maior) {
            maior = *(nota + i);
    }
  }
        return maior;
}

  int multiplicar(int *nota, int n, int multiplicador) {
    for (int i = 0; i < n; i++) {
        *(nota + i) *= multiplicador;
    } 
    return multiplicador;
      
}
    int somar(int *nota, int n){
      int soma = 0;
      for (int i = 0; i < n; i++){
        soma += *(nota + i);
      }
      return soma;
    }

    int mostrar_array(int *nota, int n) {
        int *ponteiro = nota;

        for (int i = 0; i < n; i++) {
            ponteiro++;
        }
        return *ponteiro;
    }
    
int main(void) {
    int notas[5];
    int *nota;
    int multiplicador;
  
    printf("Insira 5 notas:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &notas[i]);
    }
    printf("Digite um valor para multiplicar as notas: ");
    scanf("%d", &multiplicador);

    nota = notas;
  
    int maior_nota = ordenar(nota, 5);
    printf("A maior nota é: %i\n", maior_nota);
  
    int soma_notas = somar(nota, 5);
    printf("A soma das notas é: %i\n", soma_notas);

    ascendente(nota, 5);
    printf("Notas: ");
      for (int i = 0; i < 5; i++) {
        printf("%d ", notas[i]);
    }
  printf("\n");
  
  int todas_notas = mostrar_array(nota,5);
  
  multiplicar(nota, 5, multiplicador);
   printf("Notas multiplicados: ");
    for (int i = 0; i < 5; i++) {
      printf("%d ", notas[i]);
  }
  
    return 0;
}
