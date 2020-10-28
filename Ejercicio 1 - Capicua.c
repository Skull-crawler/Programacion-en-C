#include <stdio.h>
#include <string.h>
#define TAMANIO_MAX 100

int esCapicua(char cadena[]);
int verificar(char cadena[]);

int main(){
    char cadena[TAMANIO_MAX];

    printf("----- CAPICUAS -----\n");
    printf("Ingrese un numero entero positivo: ");
    scanf("%s", cadena);

    if(!verificar(cadena)) {
        printf("No ingreso un numero entero positivo!\n");
        return -1;
    }

    if(esCapicua(cadena))
        printf("%s SI es capicua\n\n", cadena);
    else
        printf("%s NO es capicua\n\n", cadena);
    
    printf("----- FIN DEL PROGRAMA -----");

    return 0;
}

int esCapicua(char cadena[]){
    int i = 0;
    int j = strlen(cadena) - 1;
    int bandera = 1;

    while(i < j && bandera == 1) {
        if(cadena[i] != cadena[j])
            bandera = 0;
        i++;
        j--;
    }
    return bandera;
}

int verificar(char cadena[]){
    int i, longitud = strlen(cadena), bandera = 1;

    for(i = 0; i < longitud && bandera == 1; i++){
        switch (cadena[i]) {
            case '0': break;
            case '1': break;
            case '2': break;
            case '3': break;
            case '4': break;
            case '5': break;
            case '6': break;
            case '7': break;
            case '8': break;
            case '9': break;
            default: bandera = 0;  // NO cumple con las condiciones
        }
    }
    return bandera;       // SI cumple con las condiciones
}