#include <stdio.h>

struct Telefone {
    int ddd;
    long telefone;
};

int main() {
    
    struct Telefone telefones[3];

    for (int i = 0; i < 3; i++){
        printf("Digite o DDD do telefone %d: ", i + 1);
        scanf("%d", &telefones[i].ddd);

        printf("Digite o numero do telefone %d: ", i + 1);
        scanf("%ld", &telefones[i].telefone);
    }

    printf("Telefones cadastrados: \n");

    for (int i = 0; i < 3; i++){
        printf("Telefone %d: (%d) %ld. \n", i+ 1, telefones[i].ddd, telefones[i].telefone);
    }

    return 0;
}
