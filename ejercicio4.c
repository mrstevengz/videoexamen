//Leer una frase y mostrar cuantas letras tiene al igual mostrarla en mayuscula

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char frase[100];
    int cantidad;
    printf("Dime una frase: ");
    scanf(" %[^\n]", frase);
    cantidad = strlen(frase);
    printf("La frase %s tiene %i", frase, cantidad);

    return 0;
}
