#include <stdio.h>

// Função para verificar se um número é primo
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Encontrou um divisor, não é primo
        }
    }
    
    return 1; // Não encontrou divisores, é primo
}

int main() {
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
