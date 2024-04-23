#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAX 100

typedef struct {
  double itens[TAMANHO_MAX];
  int topo;
} Pilha;

void inicializar(Pilha *p) { p->topo = -1; }

int estaVazia(Pilha *p) { return p->topo == -1; }

int estaCheia(Pilha *p) { return p->topo == TAMANHO_MAX - 1; }

void empilhar(Pilha *p, double valor) {
  if (estaCheia(p)) {
    printf("Pilha cheia!\n");
    exit(EXIT_FAILURE);
  }
  p->itens[++(p->topo)] = valor;
}

double desempilhar(Pilha *p) {
  if (estaVazia(p)) {
    printf("Pilha vazia!\n");
    exit(EXIT_FAILURE);
  }
  return p->itens[(p->topo)--];
}

double executarOperacao(double operando1, double operando2, char operador) {
  switch (operador) {
  case '+':
    return operando1 + operando2;
  case '-':
    return operando1 - operando2;
  case '*':
    return operando1 * operando2;
  case '/':
    if (operando2 == 0) {
      printf("Divisão por zero!\n");
      exit(EXIT_FAILURE);
    }
    return operando1 / operando2;
  default:
    printf("Operador inválido!\n");
    exit(EXIT_FAILURE);
  }
}

int main() {
  Pilha pilha;
  inicializar(&pilha);

  char entrada[100];
  printf("Digite a expressao RPN: ");
  fgets(entrada, sizeof(entrada), stdin);

  int i = 0;
  while (entrada[i] != '\0') {
    if (isdigit(entrada[i])) {
      double numero;
      sscanf(&entrada[i], "%lf", &numero);
      empilhar(&pilha, numero);

      while (isdigit(entrada[i]) || entrada[i] == '.') {
        i++;
      }
    } else if (entrada[i] == '+' || entrada[i] == '-' || entrada[i] == '*' ||
               entrada[i] == '/') {
      double operando2 = desempilhar(&pilha);
      double operando1 = desempilhar(&pilha);
      double resultado = executarOperacao(operando1, operando2, entrada[i]);
      empilhar(&pilha, resultado);
      i++;
    } else if (entrada[i] == ' ') {
      i++;
    } else if (entrada[i] == '\n') {
      break;
    } else {
      printf("Caractere inválido!\n");
      exit(EXIT_FAILURE);
    }
  }

  if (pilha.topo != 0) {
    printf("Expressao invalida!\n");
    exit(EXIT_FAILURE);
  }

  double resultadoFinal = desempilhar(&pilha);
  printf("Resultado: %.2lf\n", resultadoFinal);

  return 0;
}