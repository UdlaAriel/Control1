#include <stdio.h>

int main ()
{
    int num_entrada;
    int vflag  = 1;

    /*Ingreso de datos*/
    scanf("%d", &num_entrada);
    int *pointer_to_num_entrada = num_entrada;

    /*
    do
    {

    }
    while (vflag != 0);
    */
   pointer_to_num_entrada++;

   printf("%d", *pointer_to_num_entrada);

    return 0;
}