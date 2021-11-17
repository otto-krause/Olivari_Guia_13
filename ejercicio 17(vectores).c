#include <stdio.h>
int main()
{ 
int n;
 printf("ingrese el valor de n: ");
 scanf("%d",&n); 
int b[n]; 
for(int i = 0; i < n; i++)
{ 
scanf("%d", &b[i]); 
}
int v[n]; 
int v2[n]; 
for (int i = 0; i < n; i++)
{ 
v[i] = v2[n-1]; 
} 
for(int i = 0; i < n; i++)
{ 
printf("%d", v2[i]); 
}
}