#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int suma;
    printf("Digita el primer valor: ");
    scanf("%i", &num1);
    printf("Digita el segundo valor: ");
    scanf("%i", &num2);
    suma=num1+num2; 
    printf("La suma es: ");
    printf("%i",suma);
     return 0;
}
