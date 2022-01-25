/*Hello World Version 3*/
#include <stdio.h>

int main(void) {
    int i=0;
    char *str="Hello World!\n";

    /*Print each character until reach '\0'*/
    while (str[i] != '\0')
        printf("%c", str[i++]); /*como solo es una instrucción (1 línea), no es necesario poner los corchetes {}*/
    return 0;
}
