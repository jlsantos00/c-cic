/*Verificar se três números formam um triângulo e, se sim, identificar o tipo de triângulo */
#include <stdio.h>

int main() {
    int a, b, c, cond1, cond2, cond3;

    printf("Digite os tres lados do triangulo (separados por espaco): ");
    scanf("%d %d %d", &a, &b, &c);

    cond1= (a + b > c && a + c > b && b + c > a);
    cond2= (a == b && b == c);
    cond3= (a == b || b == c || a == c);

    if (cond1) {
        if (cond2) {
            printf("Triangulo equilatero.\n");
        } else if (cond3) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}