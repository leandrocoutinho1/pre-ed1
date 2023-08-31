#include <stdio.h>
 
int main() {
    float N1, N2;
    int continua = 1;
    
    while(continua == 1){

        do
        {
            scanf("%f", &N1);
            if(N1 < 0 || N1 > 10){
                printf("nota invalida\n");
            }

        } while (N1 < 0 || N1 > 10);

        do
        {
            scanf("%f", &N2);
            if(N2 < 0 || N2 > 10){
                printf("nota invalida\n");
            }

        } while (N2 < 0 || N2 > 10);

        
        printf("media = %.2f\n", (N1 + N2)/ 2);
        


        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &continua);

        } while (continua < 1 || continua > 2);
        
    }
    
    return 0;
}