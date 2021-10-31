#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[23];
    int a;
        for(int i=0;i<20;i++) {
             printf("Introduzca el sueldo de la persona nro%d : ", i+1);
             scanf("%d",&v[i]);
             if(v[i]>2000)
             {
                  a++;
             }
            
           
             
        }
       
    printf("La cantidad de personas que cobran mas de 2000 pesos son: %d\n", a);
    printf("La cantidad de personas que cobran menos de 2000 pesos son: %d\n", 20-a);
    
}
