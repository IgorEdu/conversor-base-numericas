#include <stdio.h>
#include <stdlib.h>

void converteDecimalParaBinario(int decimal){
    int restoBin;
    int binarioConvertido[100];
    restoBin = 0;

    restoBin = valorDecimal;
    printf("Decimal convertido para binario: ");
    while(restoBin > 0){
        if(restoBin % 2 == 0 ){
            binarioConvertido[cont] = 0;
        } else {
            binarioConvertido[cont] = 1;
        }

        restoBin = restoBin/2;
        cont++;
    }

    for(cont; cont > 0; cont--){
        printf("%d", binarioConvertido[cont-1]);
    }
    printf("\n");
}

void decimal(){
    int valorDecimal, cont;
    valorDecimal = cont = 0;
    do{
        printf("Digite o valor decimal positivo para realizar as conversoes:\n");
        scanf("%d", &valorDecimal);
        if (valorDecimal < 0){
            printf("Valor invalido. Digite novamente.\n");
        }
    }while (valorDecimal < 0);

    converteDecimalParaBinario(valorDecimal);

}

int main(){
    int opcao;
    opcao = 0;
    do{
        printf("Menu\n");
        printf("Digite a opcao que deseja realizar a verificacao:\n");
        printf("\t 1 - Decimal\n");
        printf("\t 2 - Binario\n");
        printf("\t 3 - Hexadecimal\n");
        printf("\t 4 - Octal\n");
        scanf("%d", &opcao);
        if(opcao <= 0 || opcao > 4)
            printf("Opcao invalida. Digite novamente.\n");
    } while(opcao <= 0 || opcao > 4);


    switch(opcao){
    case 1:
        decimal();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
    }

    return 0;
}
