#include <stdio.h>
#include<stdlib.h> 
int main()
{ 
int v[6], i=0, j=0; 
for(i=0;i<6;i++) 
{ 
printf("Ingresar un numero: "); 
scanf("%d", &v[i]); 
}
for (j=0;j<6;j++) 
{ 
if (v[j]%2==0) 
{ 
printf("Posicion: %d\n", v[i]+1); 
} 
}
}

