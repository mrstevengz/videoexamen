//Calcular el cuadrado de un numero par

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, cuadrado;
    system("cls"); //Funciones o comandos del sistema operativo, limpiar pantalla para windows
    printf("Dime un numero: ");
    scanf("%i, &num");

    //Evaluar si el numero es par
    if(num%2 == 0){
        cuadrado= pow(num, 2);
        printf("El cuadrado de %i es %i", num, cuadrado);
    }else{
        printf("El numero %i no es par", num);
    }

    return 0;
}
