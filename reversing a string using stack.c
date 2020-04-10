/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  
#include <string.h>  
  
#define max 100  
int up,stack[max];  
  
void push(char x)
{  
if(up == max-1)
{  
   printf("OVER FLOW OF STACK");  
}  
else 
{  
stack[++up]=x;  
}  
  
}  
  
void pop()
{  
   printf("%c",stack[up--]);  
}  
  
  
main()  
{  
char str[40];
   printf("THE STRING TO BE ENTERED : \n");
   scanf("%s",&str);
int len = strlen(str);  
int i;  
for(i=0;i<len;i++)  
push(str[i]);  
for(i=0;i<len;i++)  
pop();
}
