#include<stdio.h>
#include<stdlib.h> 
int main()
{ 
int n=0,i=0, v[3];
 printf("Ingrese las repeticiones\n"); 
scanf("%d", &v[0]);
 system("cls");
 v[2]=1; 
printf("0 "); 
for (i=1; i<=v[0]; i++)
 { 
v[3]=v[1]+v[2]; 
v[1]=v[2];
 v[2]=v[3];
 printf("%d ", v[1]); 
}
}