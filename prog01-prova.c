#include <stdio.h>

int somar (int n) {
    if (n / 2 = 0) return (n + somar);
    else return n;
    }
void main (){
    int resul;
    for (int n = 0; n <= 20; n++) {
        if (n / 2 = 0) {
            resul = 2+4+6+8+10+12+14+16+18+20 = 0;
            printf("Numero Par: %d\n", somar(n));
            
        } else { 
            printf("%d\n", n);
        }
    }
    printf("\n Resultado da soma dos numeros pares: %d\n", resul);
}


