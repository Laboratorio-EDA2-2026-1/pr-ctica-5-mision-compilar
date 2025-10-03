// Escribe aqui la implementación de los ejercicios de búsqueda binaria.

//EJERCICIO 1
//Implementa el algoritmo de búsqueda binaria (recuerda que es un algoritmo recursivo).
#include <stdio.h>

// Función recursiva de búsqueda binaria
int busquedaBinaria(int arr[], int inicio, int fin, int llave) {
    int resultado;

    if (inicio>fin) {
        resultado=-1; //LLAVE NO ENCONTRADA
    }else{
        int medio=inicio+(fin-inicio)/2; //DATO DE EN MEDIO

        if (arr[medio]==llave){
            resultado=medio; //LLAVE ENCONTRADA
        } 
        else if (llave<arr[medio]){
            resultado=busquedaBinaria(arr, inicio, medio-1, llave);
        }else{
            resultado=busquedaBinaria(arr, medio+1, fin, llave);
        }
    }
    return resultado;
}

int main() {
    int arr[]={4, 14, 53, 73, 154, 214, 742, 948};
    int n = sizeof(arr)/sizeof(arr[0]);
    int llave;

    printf("Ingrese la llave que desea buscar: ");
    scanf("%d", &llave);

    int resultado=busquedaBinaria(arr, 0, n-1, llave);

    if (resultado==-1){
        printf("La llave %d no se encontro.\n", llave);
    } else {
        printf("La llave %d se encuentra en la posicion %d.\n", llave, resultado);
    }
    return 0;
}

//EJERCICIO 2
#include <stdio.h>

//Parámetros:
//Función recursiva para la búsqueda binaria de un número real
//x: número real a convertir
//inicio: límite izquierdo del intervalo
//fin: límite derecho del intervalo
//pasosRestantes: cuántos pasos faltan
void codigoBinarioRecursivo(double x, double inicio, double fin, int pasosRestantes) {
    if(pasosRestantes==0) {
        return; //SIN PASOS
    }

    double medio=(inicio+fin)/2.0;

    if(x<medio) {
        printf("0");
        codigoBinarioRecursivo(x, inicio, medio, pasosRestantes-1); 
    } else {
        printf("1");
        codigoBinarioRecursivo(x, medio, fin, pasosRestantes-1); 
    }
}

int main() {
    double numero; //(0<= x <1)
    int pasos;  
  
    printf("Ingrese un número real x (0<= x <1): ");
    scanf("%lf", &numero);

    printf("Ingrese el número de pasos k: ");
    scanf("%d", &pasos);

    printf("Código binario de %.10f con %d pasos: ", numero, pasos);
    codigoBinarioRecursivo(numero, 0.0, 1.0, pasos);
    printf("\n");

    return 0;
}

