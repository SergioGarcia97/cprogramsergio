#include <stdio.h>
void primos (int n1)
{
    int aux,a,b;
    for (a=1;a<=n1;a++)
        {
	        /* Estudiamos si el numero 'i' es primo o no. Para ello contabilizamos sus divisores.*/
	
	        aux=0;
	        for (b=1;b<=a;b++)
	        {
		            if (a%b==0)
		                aux++;
		        }
	        /* Todo numero es divisible entre 1 y entre si mismo; por tanto, si el numero total de divisores
		 *         Es igual a 2, el numero es primo. */
	        if (aux==2)
	            printf("%d\n",a);
	    }
}

int main()
{
    int n1;


    do
    {
    
            printf("Introduce un numero mayor que cero: ");
            scanf("%d",&n1);
        }while(n1<1);
    printf("Los numeros primos entre 1 y %d son:\n",n1);
    primos(n1);

    return 0;
}  
