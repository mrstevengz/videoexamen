#include <stdio.h>
#include <math.h>

//Obtener la raiz cuadrada de un numero

int main(int argc, char const *argv[])
{
    float num, raiz;
    printf("Ingrese un numero: ");
    scanf("%f, &num");
    raiz = sqrt(num);
    printf("La raiz cuadrada de %.2f es %.2f", num, raiz);
    return 0;
}
