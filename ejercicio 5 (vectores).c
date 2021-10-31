#include <stdio.h>
#include <stdlib.h>

int main()
{
int v[22];
 for (int i=2;i<22;i++) {
 printf("Vendedor  nro%d total de unidades\nvendidas en 15 dias: \n",i-1);
 scanf("%d", &v[i]);
 v[0]+=v[i];
if(v[i]>v[1])
{
v[1]=v[i];
}
 }
printf("total: %d, mayor: %d", v[0], v[1]);

}
    