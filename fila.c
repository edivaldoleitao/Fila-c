#include <stdio.h>


struct fila {
  int numero;
  struct fila *prox;
};
typedef struct fila *Fila;


struct cabeca_fila {
  struct fila *primeiro, *ultimo;
};
typedef struct cabeca_fila * CabecaFila;

CabecaFila cria_cabeca() {
  CabecaFila cabeca = (CabecaFila) malloc(sizeof(struct cabeca_fila));
  cabeca->primeiro = NULL;
  cabeca->ultimo = NULL;
  return cabeca;
}

void insere_fila(CabecaFila cabeca,int num) {
  Fila f =  (Fila) malloc(sizeof(struct fila));
  f->numero = num;
  f->prox = NULL;
  cabeca->ultimo = f;
  cabeca->ultimo->prox = f->prox;
}

int remove_fila(CabecaFila cabeca) {
  int i = cabeca->primeiro->numero;
  Fila aux;
  aux->prox = cabeca->primeiro->prox;
  free(cabeca->primeiro);
  cabeca->primeiro = aux;
  return i;
}







int main(void) {
  printf("Hello World\n");
  return 0;
}
