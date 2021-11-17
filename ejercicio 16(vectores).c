#include <stdio.h>
#include <stdlib.h> 
void vectores(int* v)
{ 
for(int i=0;i<6;i++) 
{ 
scanf("%d", &v[i]); 
}
} 
int main()
{
int v[6], a[6], n=0; 
printf("Vector 1: "); 
vectores(v); 
printf("Vector 2: "); 
vectores(a);
printf("ingrese el valor de n: ");
scanf("%d"); 
if(n>6||n<0) 
return 1; 
int b[n]; 
for (int i=0;i<n;i++) 
{ 
b[i]=v[i]*a[n-i*1]; 
}
for(int i=0;i<6;i++) 
{ 
printf("%d ", b[i]); 
}
}