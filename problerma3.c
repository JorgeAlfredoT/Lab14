#include <stdio.h>
#include<string.h>
// string invertido._.

char invertido(char lista[], int c){

    int e;
    char general[100];
    char lista2[c];
    for(e=0; e<c ;e++){
        lista2[e]=lista[c-e-1];
    }
    if (c==0)
        return 0;
    else
        invertido(lista2,  c-1);
        return strcat(general,lista);

}

int main(){

    char list[]="numeros";
    printf("%s",invertido(list,7));
    return 0;
}
