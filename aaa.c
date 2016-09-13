#include <stdio.h>
// convierte mayusculas a minusculas._.
int convertir(int c){
    c+=32;
    return c;
}
int main(){
    int convertido;
    convertido=convertir('A');
    printf("%c",convertido);
    return 0;
}
