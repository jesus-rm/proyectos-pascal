#include <stdio.h>
#include <stdlib.h>
main()
    {system("color 5F");
     char nombre[20]="archivo.txt ",linea[81];
     FILE *fichero;
     fichero=fopen(nombre,"r");
     printf("Fichero: %s\n",nombre);
     if(fichero)
       {printf("Existe archivo\n");}
     else
        {printf("No existe archivo\n");}
     printf("La primera linea del fichero es: %s",nombre);
     printf("%s",fgets(linea,81,fichero));
     if(!fclose(fichero))
       {printf("\nFichero cerrado\n");}
     else
        {printf("\nFichero no cerrado\n");}
}
