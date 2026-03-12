#include <stdio.h>
void main() {
float a, aprovado, reprovado;
printf("Digite A: ");
scanf("%f", &a);
aprovado = a >= 6.0;
reprovado = a < 6.0;
printf("aprovado: %.2f\n", aprovado);
printf("reprovado: %.2f\n", reprovado);
}