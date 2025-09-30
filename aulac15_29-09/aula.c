#include <stdio.h>
struct produto {
	int codigo;
	char categoria, nome [20];
	double valor;
};
int main() {
	struct produto p[5];
	int i, j;
	for (int i=0; i<2; i++) {

		p[i].codigo;
		p[i].categoria;
		p[i].valor;
		p[i].nome;
		printf("Cod: ");
		scanf(" %d", &p[i].codigo);
		fflush(stdin);
		printf("Categoria: ");
		scanf(" %c", &p[i].categoria);
		fflush(stdin);
		printf("Valor: ");
		scanf(" %lf", &p[i].valor);
		fflush(stdin);
		printf("Nome do produto: ");
		scanf(" %s", &p[i].nome);
		fflush(stdin);
	}
	for (i=0; i<2; i++) {
		printf("Codigo:%d\n", p[i].codigo);
		printf("Categoria:%c\n", p[i].categoria);
		printf("Valor:%lf\n", p[i].valor);
		printf("Nome:%s\n", p[i].nome);
	}
	return 0;
}
