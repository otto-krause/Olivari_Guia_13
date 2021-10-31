#include <stdio.h>
int main()
{ float  v[7];
 v[0];
 v[1]; 
for(int i = 2 ; i <7 ; i++)
{ 
printf("Valor %d: ", i-1); 
scanf("%f", &v[i]);
v[1] += v[i]; 
if(v[i] > v[0])
{ v[0] = v[i]; 
}
 }
printf("mayor: %f, promedio: %f\n", v[0], v[1]/5);}