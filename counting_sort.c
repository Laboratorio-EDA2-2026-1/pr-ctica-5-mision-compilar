// Escribe aquí la implementación de los ejercicios de Counting Sort.
//Resolucion problema 1 de Counting Sort.
#include <stdio.h>
#include <string.h>

void ordenar(char s[]) {
    int abc[26] = {0};  
    int i;

    for (i = 0; s[i] != '\0'; i++)
        abc[s[i] - 'a']++;

    int pos = 0;
    for (i = 0; i < 26; i++)
        while (abc[i]--)
            s[pos++] = i + 'a';
}

int main() {
    char s[100];

    printf("Ingresa una cadena: ");
    scanf("%s", s); 

    ordenar(s);

    printf("Cadena ordenada: %s\n", s);
    return 0;
}

//Resolucion problema 2 de Counting Sort.
#include <stdio.h>

void ordenar(char Arr[], int n) {
    int izq = 0, 
    med = 0, 
    der = n - 1;

    while (med <= der) {
        if (Arr[med] == 'R') {
            char temp = Arr[izq]; 
            Arr[izq] = Arr[med]; 
            Arr[med] = temp;
            izq++; 
            med++;
        }
        else if (Arr[med] == 'B') {
            med++;
        }
        else { 
            char temp = Arr[med]; 
            Arr[med] = Arr[der]; 
            Arr[der] = temp;
            der--;
        }
    }
}

int main() {
    char Arr[] = {'A','R','B','A','R','B','R','A'};
    int n = 8;

    ordenar(Arr, n);

    printf("Arreglo ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", Arr[i]);
    }
    return 0;
}
