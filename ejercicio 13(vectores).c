#include <stdio.h>
int main()
{ 
int v[6]; 

for(int i = 0; i < 6; i++)
{ 
printf("Ingrese un numero: ");
scanf("%d", &v[i]); 
} 
for (int i = 0; i < 6; i++)
{ 
if (i %2 == 0)
{ 
printf("%d ", v[i]); 
} 
}
}