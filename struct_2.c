#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    
    struct Data datas[3];

    for (int i = 0; i < 3; i++){
        printf("Digite o dia da data %d: ", i + 1);
        scanf("%d", &datas[i].dia);

        printf("Digite o mes da data %d: ", i + 1);
        scanf("%d", &datas[i].mes);

        printf("Digite o ano da data %d: ", i + 1);
        scanf("%d", &datas[i].anzo);

    }

    printf("Datas cadastradas: \n");

    for (int i = 0; i < 3; i++){
        printf("Telefone %d: (%d) %ld. \n", i+ 1, telefones[i].ddd, telefones[i].telefone);
    }

    return 0;
}
