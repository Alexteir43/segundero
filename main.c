#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long dias, horas, minutos, segundos;

    char buffer [80];
    char *endptr;

    printf("Ingrese el número de dias a convertir en segundos: ");
    fgets(buffer, sizeof(buffer), stdin);
    dias = strtol(buffer, &endptr, 10);

    printf("Ingrese el número de horas a convertir en segundos: ");
    fgets(buffer, sizeof(buffer), stdin);
    horas = strtol(buffer, &endptr, 10 );

    printf("Ingrese el número de minutos a convertir en segundos: ");
    fgets(buffer, sizeof(buffer), stdin);
    minutos = strtol(buffer, &endptr, 10 );

    printf("Ingrese el número de segundos: ");
    fgets(buffer, sizeof(buffer), stdin);
    segundos = strtol(buffer, &endptr, 10 );

    const int sPorDia = dias * 86400;
    const int sPorHora = horas * 3600;
    const int sPorMin = minutos * 60;
    const int totalSegundos = segundos + sPorDia + sPorHora + sPorMin;

    printf("El total de tiempo convertido es: /ld segundos.\n", totalSegundos);


    return 0;
}