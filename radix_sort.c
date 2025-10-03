// Escribe aquí la implementación del ejercicio de Radix Sort.
#include <stdio.h>

void countingSort(int arr[], int n, int posicion) {
    int output[100];
    int count[10]={0}; //Del 0 al 9

    for(int i=0; i<n; i++) {
        int digitoActual=(arr[i]/posicion)%10;
        count[digitoActual]++;
    }

    for(int i=1; i<10; i++) {
        count[i]+=count[i-1];
    }

    for(int i=n-1; i>=0; i--) {
        int digitoActual= (arr[i]/posicion) % 10;
        output[count[digitoActual]-1]= arr[i];
        count[digitoActual]--;
    }

    for(int i=0; i<n; i++) {
        arr[i] = output[i];
    }
}

int getMaxDigitos(int arr[], int n) {
    int max=arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]>max) max=arr[i];
    }

    int digitos=0;
    while(max>0) {
        max/=10;
        digitos++;
    }
    return digitos;
}

void radixSort(int arr[], int n) {
    int maxDigitos = getMaxDigitos(arr, n);
    int posicion=1; //unidades

    for(int i=0; i<maxDigitos; i++) {
        countingSort(arr,n,posicion); //decenas & centenas
        posicion*=10; 
    }
}

int main() {
    int arr[]={53,3,542,748,14,214,154,63};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Antes de ordenar: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    radixSort(arr,n);

    printf("\nDespués de ordenar: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}
