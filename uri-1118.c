#include <stdio.h>
 
int main() {
    float N1, N2;
    int continua = 1;
    
    while(continua == 1){
        scanf("%f", &N1);
        while(N1 < 0 || N1 > 10){
            printf("nota invalida\n");
            scanf("%f", &N1);
        }
        scanf("%f", &N1);
        while(N2 < 0 || N2 > 10){
            printf("nota invalida\n");
            scanf("%f", &N2);
        }
        
        printf("media = %.2f\n", (N1 + N2)/ 2)
        
        
    }
    
    return 0;
}