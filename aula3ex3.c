#include <stdio.h>

int main() {

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9 && nota <= 10) {
        printf("Conceito: A\n");
    }
    else if (nota >= 7) {
        printf("Conceito: B\n");
    }
    else if (nota >= 5) {
        printf("Conceito: C\n");
    }
    else if (nota >= 3) {
        printf("Conceito: D\n");
    }
    else if (nota >= 0) {
        printf("Conceito: E\n");
    }
    else {
        printf("Nota invalida\n");
    }

    return 0;
}