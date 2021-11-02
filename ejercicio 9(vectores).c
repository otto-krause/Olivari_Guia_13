#include <stdio.h>
int main()
{ 
unsigned int n; 
printf("ingrese cuantos valores va a tener la lista: ")
; 
if (n <= 0)
{ printf("\nla lista debe ser mayor a 0\n"); 
} 
scanf("%d", &n);
 int e[n];
 for(int i = 0; i<n; i++)
{
 scanf("%d", &e[i]); 
} 
for(int i = 1; i<n; i++)
{ if(e[i-1] < e[i])
{ if(i == n-1)
 printf("se ingresaron los numeros de forma\nascendente"); continue; 
} 
if(e[i-1] > e[i])
{ 
if(i == n-1) 
printf("se ingresaron los numeros de forma\ndescendente"); continue;
 } 
else { printf("se ingresaron los numeros de forma\ndesordenada");
 break; 
} 
}
 printf("\nLa suma entre el primer y\núltimo número es:%d", e[0] + e[n-1]);
}