// Prot�tipo da struct.
typedef struct grafo Grafo;

// Prot�tipo da fun��o de inializa��o do grafo.
Grafo *Cria_Grafo(int num_vertice, int grau_max, int eh_ponderado);

// Prot�tipo da fun��o que libera a aloca��o dinamica do grafo.
void Libera_Grafo(Grafo *gr);

// Prot�tipo da fun��o de inser��o de arestas.
int Inserir_Aresta(Grafo *gr, int origem, int destino, int eh_digrafo, float peso);

// Prot�tipo da fun��o de remo��o de arestas.
int Remover_Aresta(Grafo *gr, int origem, int destino, int eh_digrafo);

// Prot�tipo da fun��o que busca o menor caminho entre os elementos (Djikstra).
void Menor_Caminho_Grafo(Grafo *gr, int inicial, int *anterior, float *distancia);

// Prot�tipo da fun��o que imprime o grafo.
void Imprime_Grafo(Grafo *gr,int city_origem,int *vet_cidade);

// Prot�tipo da fun��o que imprime os relacionamentos do grafo.
void Imprime_Relacionamentos(Grafo *gr,int *vet_cidade);

// Prot�tipo da fun��o que executa o menu do programa.
int menu();
