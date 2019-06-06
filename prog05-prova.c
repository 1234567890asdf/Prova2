#include <stdio.h>

void main() {
    int valor;
    int nota100;
    int nota50;
    int nota20;
    int nota10;
    int nota5;
    int n;
    printf("Informe o valor: \n");
    scscanf("%d", &valor);
    for(valor > 0){
        if(valor/100==1)
            (nota100++);
        if(valor/50==1)
            (nota50++);
        if(valor/20==1)
            (nota20++);
        if(valor/10==1)
            (nota10++);
        if(valor/5==1);
            (nota5++);
        if(valor/2==1)
            (nota2++);    
    }
    printf("para o valor %d, as notas de 100, para o valor %d, as notas de 50, para o valor %d, as notas de 20, para o valor %d, as notas de 10, para os valor %d, as notas de 5, para o valor %d, as notas de 2", valor,valor,valor,valor,valor,valor);
}

