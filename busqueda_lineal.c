// Escribe aquí la implementación de los ejercicios de búsqueda lineal.

//Ejercicio 1 de busqueda lineal
#include <stdio.h>

int main() {
    int llave, temp=-1;
    int arr1[10];
    printf("Dame la llave:");
    scanf("%d", &llave);
    
    for(int i=0; i<10; i++){
        arr1[i]=i;
    }
    
    for(int i=0; i<10; i++){
        if(arr1[i]==llave){
        temp = i;   
        }
    }
    if(temp ==-1){
        printf("\nTu llave no se encontro");
    }else{
    printf("\nTu llave esta en la posicion %i", temp);    
    }
    return 0;
}

//Ejercicio 2 de busqueda lineal
#include <stdio.h>

int main() {
    int llave, temp=-1, i=0;
    int arr1[10];
    printf("Dame la llave:");
    scanf("%d", &llave);
    
    for(int i=0; i<10; i++){
        arr1[i]=i;
    }
    
    while(i<10 && arr1[i-1]!=llave){
        if(arr1[i]==llave){
        temp = i;   
        }
        i++;
    }

    if(temp ==-1){
        printf("\nTu llave no se encontro");
    }else{
    printf("\nTu llave esta en la posicion %i", temp);    
    }

    return 0;
}

//Ejercicio 3 de busqueda lineal
#include <stdio.h>

int Busqueda(int arr1[10],int llave,int i,int temp){
    if(i>=10){
        return -1;
    }
    if(arr1[i]==llave){
        return i;
    }else{
    return Busqueda(arr1, llave ,i+1 ,temp);
    }
}

int main() {
    int llave, temp=-1, i=0;
    int arr1[10];
    printf("Dame la llave:");
    scanf("%d", &llave);
    
    for(int i=0; i<10; i++){
        arr1[i]=i;
    }
    
    temp = Busqueda(arr1,llave,i,temp);
    
    if(temp ==-1){
        printf("\nTu llave no se encontro");
    }else{
    printf("\nTu llave esta en la posicion %i", temp);    
    }
    return 0;
}

//Ejercicio 4 de busqueda lineal
#include <stdio.h>

int Centinela(int arr1[10],int llave,int i,int temp){
    int temp2 = arr1[10];
    arr1[10]=llave;
    
    while(arr1[i]!=llave){
     i++;
    }
    arr1[10] = temp2;
    if(i<10 || arr1[10]==llave){
        return i;
    }else{
        return -1;
    }
}
int main() {
    int llave, temp, i=0;
    int arr1[10];
    printf("Dame la llave:");
    scanf("%d", &llave);
    
    for(int i=0; i<10; i++){
        arr1[i]=i;
    }
    
    temp = Centinela(arr1,llave,i,temp);
    
    if(temp ==-1){
        printf("\nTu llave no se encontro");
    }else{
    printf("\nTu llave esta en la posicion %i", temp);    
    }

    return 0;
}
