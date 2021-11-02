#include <stdio.h>
int main()
{ int v[13];
 v[11] = 1; 
int m = 0; 
printf("Ingrese diez números\n");
 for(int i = 0; i < 10; i++)
{ 
scanf("%d", &v[i]);
} 
for(int i = 0; i< 10; i++)
{ 
v[10] += v[i];
 v[11] = v[i] * v[11];
 }
 v[12] = v[10]/10;
for(int i = 0; i< 10; i++)
{ 
if(v[i] < v[12])
 m++; 
} 
printf("suma: %d, producto: %d, promedio %d, \nmenores al promedio: %d\n", v[10], v[11], v[12], m);
}