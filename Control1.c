#include <stdio.h>

float sum_digitos (int num)
{

    float sum;
    int digit;

    while (num > 0) { 
        digit = num % 10; 

        sum += digit;

        num /= 10;
    }
    return sum;
}

int main ()
{
    int num;
    int vflag  = 1;
    float sum_inicial, sum_Final;

    /*Ingreso de datos*/
    scanf("%d", &num);

    sum_inicial = sum_digitos(num);

    printf("%f", sum_inicial);

    sum_Final = sum_digitos(sum_inicial);

    printf("%f", sum_Final);

    return 0;
}