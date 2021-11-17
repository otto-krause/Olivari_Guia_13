#include <stdio.h>
#include <stdlib.h> 
int main()
{ 
printf("Ingrese cien numero:\n");
int v[100], reps=0, min=0; 
for(int I=0;I<100;I++) 
{ scanf("%d", &v[I]); 
} min=100000; 
for(int I=0;I<100;I++) {
 reps=0;
if(min>v[I]) 
{ min=v[I]; 
} 
for(int J=0;J<100;J++) 
{ 
if (v[I]==v[J]) 
reps++; 
} 
if (reps>1) 
{ 
printf("%d se repite %d veces\n", v[I], reps); 
} 
} 
printf("el valor minimo es %d\n", min);
}