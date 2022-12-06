#include <iostream>

const int MAXNOS = 500;
typedef int TipoDado;  // tipo dos dados da árvore binária
struct No {            // nó da árvore
    TipoDado info;
    bool existe;
};

typedef int Ponteiro; // "Ponteiro" no caso de vetores = índice do vetor (int)
const int NULO = -1;  // Ponteiro p/ lugar nenhum (índice inválido do vetor)

// Operações básicas

TipoDado Info(Ponteiro p);    // retorna info do nó apontado por p
Ponteiro Esq(Ponteiro p);     // filho esquerdo de p ou NULO
Ponteiro Dir(Ponteiro p);     // filho direito de p ou NULO
Ponteiro Pai(Ponteiro p);     // pai de p ou NULO
Ponteiro Irmao(Ponteiro p);   // retorna ponteiro para o irmao de p ou NULO

class ArvBinI {
protected:
    No arvbin[MAXNOS]; // vetor para armazenar dados e estrutura da árv. (implicitamente)
public:
    ArvBinI();                 // constrói árvore binária vazia
    Ponteiro Raiz();           // retorna ponteiro para a raiz da árvore (0 ou NULO)
