/*Leer dos numeros y decir cual es el menor*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    printf("Dime el primer numero: ");
    scanf("%i", &num1);
    printf("Dime el segundo numero: ");
    scanf("%i", &num2);
    if (num1<num2){
        printf("El numero menor es: %i", num1);
    }else {
        printf("El numero menor es: %i", num2);
    }
    
    return 0;
}
