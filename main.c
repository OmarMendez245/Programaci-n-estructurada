#include <stdio.h>
#include <stdlib.h>
#include "atm.h"

/*
int valida(float cantidad) {
    if (cantidad <= 0) {
        printf("No se puede hacer el deposito.\n");
        return 0;
    }
    return 1;
}

void consultarSaldo(float saldouso) {
    printf("\nTu saldo actual es: %.2f\n", saldouso);
}

float retirar(float saldouso) {
    float cantidad;
    printf("\nIngrese la cantidad a retirar: ");
    scanf("%f", &cantidad);
    if (cantidad <= 0) {
        printf("Cantidad no válida. Deja de perder el tiempo.\n");
    } else if (cantidad > saldouso) {
        printf("Fondos insuficientes.\n");
    } else {
        saldouso = saldouso - cantidad;
        printf("Retiro exitoso. Tu nuevo saldo es %.2f\n", saldouso);
    }
    return saldouso;
}

float depositar(float saldouso) {
    float cantidad;
    printf("\nIngrese la cantidad a depositar: ");
    scanf("%f", &cantidad);
    if (valida(cantidad)) {
        saldouso =saldouso + cantidad;
        printf("Deposito exitoso. Nuevo saldo: %.2f\n", saldouso);
    }
    return saldouso;
}*/

int main()
{
    int opciones, opciones2;
    float cantidad;
    float saldo[3]={1000,1010,1020};
    float saldouso;

    printf("\n-----Cajero Automatico-----\n");
    printf("¿Cual es tu cuenta?\n");
    printf("1.-Cuenta 1\n");
    printf("2.-Cuenta 2\n");
    printf("3.-Cuenta 3\n");
    scanf("%d",&opciones2);

    switch(opciones2){
    case 1:
        saldouso=saldo[0];
        break;
    case 2:
        saldouso=saldo[1];
        break;
    case 3:
        saldouso=saldo[2];
        break;
    }


    do{
        //MENU
        printf("\n-----Cajero Automatico-----\n");
        printf("1.-Consulta de saldo\n");
        printf("2.-Deposito\n");
        printf("3.-Retiro\n");
        printf("4.-Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opciones);

        switch(opciones){
            case 1:
                consultarSaldo(saldouso);
            break;
            case 2:
                //Funcion deposito
                saldouso = depositar(saldouso);
            break;
            case 3:
                //Funcion retiro
                saldouso = retirar(saldouso);
            break;
            case 4:
                //Salida
                printf("!!Espero haber ayudado!!\n");
            break;
        }
    }while(opciones!=4);
    return 0;
}
