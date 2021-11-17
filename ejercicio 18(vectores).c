#include <stdio.h>
int vectores(int* v)
{ 
for(int i = 0; i < 9; i++)
{ 
if(v[i] == v[i+1])
{ 
if(i == 8)	
return 1; 
continue; 
} 
break; 
} 
for(int i = 0; i < 9; i++)
{ 
if(v[i] < v[i+1])
{ 
if(i == 8)	
return 2; 
continue; 
} 
break; 
} 
for(int i = 0; i < 9; i++)
{ 
if(v[i] > v[i+1])
{ 
if(i == 8)	
return 3; 
continue; 
} 
break; 
} 
return 4;
}
int main()
{ 
int v[10]; 
for(int i = 0; i < 10; i++)
{ 
scanf("%d", &v[i]); 
} 
printf("%d", vectores(v));
}