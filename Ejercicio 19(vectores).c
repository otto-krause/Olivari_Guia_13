#include <stdio.h>
int main()
{ 
int v[15]; 

for(int i = 0; i < 15; i++)
{ 
printf("Ingrese un año:\n");
scanf("%d", &v[i]); 
for(int f = 0; f < i; f++)
{ 
if (v[i] == v[f])
{
	printf("No ingrese el mismo valor!\n");	
i--;	
break; 
} 
}
 if (v[i] < 999 || v[i] > 9999)
{ 
printf("ingrese un año válido\n"); 
i--; 
}
} 
printf("bisiestos:\n"); 
for (int i = 0; i < 15; i++)
{
if ( v[i]%4==0 &&  v[i]%100!=0 || v[i]%400==0) 
printf("%d\n", v[i]); 
}
}