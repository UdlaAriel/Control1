#include <stdio.h>

/**/
int main ()
{
    int num_entrada;
    int vflag  = 1;
    int digit[50];

    /*Ingreso de datos*/
    scanf("%d", &num_entrada);
    
    do
    {
        for (int i = 0; i < 50; i++)
        {
            digit[i]= num_entrada % 10; 
            num_entrada /= 10; 
            
            printf("%d", digit[i]);

            if(num_entrada >= 0)
            {
                vflag = 0;
                break;
            }
        }
        
    }
    while (vflag != 0);

	
    printf("%d", num_entrada);

    return 0;
}