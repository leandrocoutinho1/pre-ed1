#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    int maior = 0;
    
    struct Data datas[3];

    for (int i = 0; i < 3; i++){
        printf("Digite o dia da data %d: ", i + 1);
        scanf("%d", &datas[i].dia);
        

        printf("Digite o mes da data %d: ", i + 1);
        scanf("%d", &datas[i].mes);
        

        printf("Digite o ano da data %d: ", i + 1);
        scanf("%d", &datas[i].ano);
        printf("\n");

    }

    printf("Datas cadastradas: \n");

    for (int i = 0; i < 3; i++){
        printf("Data %d: %d/%d/%d. \n", i+ 1, datas[i].dia, datas[i].mes, datas[i].ano);
    }

    for (int i = 0; i < 3; i++){
        if (datas[i].ano > maior){
            maior = datas[i].ano;
        }
    }

    printf("Maior ano: %d. \n", maior);

    return 0;
}
