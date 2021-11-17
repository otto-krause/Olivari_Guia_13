#include <stdio.h>
#include <string.h>
unsigned int b;
int mostrar(int* v, char** a)
{ 
for(int i = 0; i < b; i++)
{ 
printf("%s %d - $%d\n", a[i], i, v[i]); 
}
}
int main()
{ 
printf("ingrese la cantidad de productos\n"); 
scanf("%d", &b); 
char* producto[20]; 
int precio[b]; 
int p; 
char s[20]; 
 
for(int i = 0; i < b; i++)
{ 
printf("Ingrese el producto:\n");
scanf("%s", &producto[i]);
printf("Ingrese el precio:\n");
scanf("%d", &precio[i]); 
} 
for(int i = 0; i < b; i++)
{ 
for(int f = 0; f < b; f++)
{ 
p = precio[i]; 
precio[i] = precio[i+1]; 
precio[i+1] = p; 
strcpy(s, producto [i]); 
strcpy(producto[i], producto[i+1]);
strcpy(producto[i+1], s); 
} 
} 
mostrar(precio,producto); 
for(int i = 0; i < b; i++)
{ 
precio[i] = precio[i] * 1.5; 
} 
mostrar(precio, producto);
}