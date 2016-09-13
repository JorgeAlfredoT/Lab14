#include <stdio.h>
#include<string.h>

void inversa(char cadena[], int tam){
    if (tam>=0){
        printf("%c",cadena[tam]);
        inversa(cadena,tam-1);
    }
}
int main(){
    char milista[]="numeros";
    inversa(milista,strlen(milista));
    return 0;
}
