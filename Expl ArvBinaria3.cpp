#include <iostream>

const int MAXNOS = 500;
typedef int TipoDado;  // tipo dos dados da �rvore bin�ria
struct No {            // n� da �rvore
    TipoDado info;
    bool existe;
};

typedef int Ponteiro; // "Ponteiro" no caso de vetores = �ndice do vetor (int)
const int NULO = -1;  // Ponteiro p/ lugar nenhum (�ndice inv�lido do vetor)

// Opera��es b�sicas

TipoDado Info(Ponteiro p);    // retorna info do n� apontado por p
Ponteiro Esq(Ponteiro p);     // filho esquerdo de p ou NULO
Ponteiro Dir(Ponteiro p);     // filho direito de p ou NULO
Ponteiro Pai(Ponteiro p);     // pai de p ou NULO
Ponteiro Irmao(Ponteiro p);   // retorna ponteiro para o irmao de p ou NULO

class ArvBinI {
protected:
    No arvbin[MAXNOS]; // vetor para armazenar dados e estrutura da �rv. (implicitamente)
public:
    ArvBinI();                 // constr�i �rvore bin�ria vazia
    Ponteiro Raiz();           // retorna ponteiro para a raiz da �rvore (0 ou NULO)
