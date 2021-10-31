#include <stdio.h>
int main()
{ int a,b;
int v[0];
printf("Ingrese un número menor:\n");
scanf("%d",&a);
printf("Ingrese un número mayor:\n");
scanf("%d", &b);
for(int i = a+1; i < b; i++)
{ 
v[1]=i;
printf("%d\t ",v[1] ); 
}
}