#ifndef ORDER_BOOK_H_
#define ORDER_BOOK_H_


typedef struct No {
	int identificador;//cotação por empresa
	int operacao;//1 == venda; 2 == compra;
    int acoes;
    float preco;
    struct No *proximo;
} No;

void finalizar_sessao();
void inserir_ofertas();
void listar_ofertas();
void ordenar_lista();
void negociar_ofertas();
void eliminar_ofertas(int posicao);

#endif
