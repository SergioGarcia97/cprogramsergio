#include <stdio.h>
#include <stdlib.h>


int main(){

int Color1,Color2,Color3;


   printf("¿Ves el color amarillo? [0.SIP ,1.NOPE]");
 scanf("%i ", &Color1);

   printf("¿Ves el color rojo? [0.SIP ,1.NOPE]");
scanf("%i", &Color2);
   printf("¿Ves el color azul? [0.SIP ,1.NOPE]");
 scanf("%i", &Color3);

system ("clear");

if (Color1 == 0  and Color2 == 0 and Color3 == 1 );
{
printf("tu color es naranja\n");
}

if (Color1 == 0 and Color2 == 1 and Color3 == 0 );
{
printf("tu color es verde\n");
}
return EXIT_SUCCESS;

}



