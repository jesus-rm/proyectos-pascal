/*Realizar un programa que dependiendo del signo del angulo realice un seno o coseno.
  Seno (+)
  Coseno (-)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
    {
     float angulo,y;

         printf("CALCULADORA DE SENOS Y COSENOS EN RADIANES\n");
         printf("\n");

           printf("Ingresa el angulo: ");
           scanf("%f",&angulo);
                 if(angulo>0)
                   {y=sin(angulo);
                   printf("El seno del angulo dado es = %.4f\n",y);}
                 else if(angulo<0)
                     {y=cos(angulo);
                     printf("El coseno del angulo dado es = %.4f\n",y);}
                 else
                     {printf("Error\n");}
        system("pause");
        return 0;
     }
