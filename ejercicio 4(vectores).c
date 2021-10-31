#include <stdio.h>
#include <stdlib.h>

int main()
{
  int v[31];
            for (int i=0;i<30;i++) {
            printf("Alumno nro%d : \n",i+1);
            scanf("%d", &v[i]);
            v[0]+=v[i];

            }
            
        printf("La nota promedio es: \n%d\n", v[0]/30);

}
