#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[15];
        for(int i=1;i<=15;i++) {
             printf("Introduzca la nota del alumno nro%d:\n ", i);
             scanf("%d",&v[i]);
            }
            for(int i=0;i<15;i++)
             if(v[i]>8)
             {
                  printf("El alumno %d tiene la nota mayor a 8\n",i);;
             }
            
           return 0;
             
        }
       
    
