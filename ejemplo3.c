#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int multip;
    printf("Digite el primer numero: ");
    scanf("%i", &num1);
    printf("Digite el segundo numero: ");
    scanf("%i", &num2);
    multip= num1 * num2;
    printf("La respuesta es: %i ", multip);
    
    return 0;
}
