#include <stdio.h>

int main() {
    float A, B, C, N1, N2, N3;
    scanf("%f %f %f", &A, &B, &C);

    if (A < B) {
        float temp = A;
        A = B;
        B = temp;
    }
    if (A < C) {
        float temp = A;
        A = C;
        C = temp;
    }
    if (B < C) {
        float temp = B;
        B = C;
        C = temp;
    }

    if (A >= (B + C)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if ((A * A) == ((B * B) + (C * C))) {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((A * A) > ((B * B) + (C * C))) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((A * A) < ((B * B) + (C * C))) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((A == B) && (B == C)) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A == B && B != C) || (A == C && C != B) || (B == C && C != A)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
