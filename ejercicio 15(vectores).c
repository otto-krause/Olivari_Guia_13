#include <stdio.h>
int vectores(int* v){ 
for(int i = 0; i < 10; i++)
{ 
scanf("%d", &v[i]); 
}
}
int main()
{
int v[10]; 
int a[10]; 
printf("Vector 1:\n");
vectores(v); 
printf("Vector 2:\n");
vectores(a); 
int b[10]; 
for (int i = 0; i < 10; i++)
{ 
if (i %2 == 0) 
b[i] = a[i]; 
else b[i] = v[i]; 
} 
for(int i = 0; i < 10; i++)
{
 printf("%d", b[i]);
 }
}