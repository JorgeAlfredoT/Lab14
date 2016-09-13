#include <stdio.h>
#include<string.h>
// problema 2
int strindex(char lista[], char c){

    int e,l;

    l=strlen(lista);

    char lista2[l];

    for(e=0; e<l ;e++){
        lista2[e]=lista[l-e-1];
    }
    for(e=0; e<l ;e++){
        if (c==lista2[e]){
            return e;
        }
    }
    return -1;
}



int main(){

    printf("%d",strindex("ciencia de la computacion",'o'));

    return 0;
}
