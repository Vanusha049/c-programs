//simulation of simple calculator 
#include<stdio.h>
int main() 
{
  int a,b;
  float result;
  char op;
  printf("enter a and b values:");
  scanf("%d%d",&a,&b);
  printf("enter operator:");
  scanf(" %c",&op);
  if(op=='+')
  {
    result=a+b;
    printf("sum of a and b values =%f\n",result);
    } 
  else if(op=='-')
  {
    result=a-b;
  printf("diff of a and b=%f\n", result);
    } 
 else if(op=='*')
{
  result=a*b;
  printf("product of a and b=%f\n", result);
  } 
  else if(op=='/') 
 {
   if(b==0)
   {
     printf("division not possible \n");
     return 1;
   }
   else
   {
   result=a/b;
   printf("after division, quotient of a and b =%f\n", result);
     return 0;
     }
   } 
  else if(op=='%')
  {
    if(b==0)
    {
      printf("division not possible \n");
      return 1;
    }
    else
    {
      result=a%b;
      printf("reminder of a and b=%f\n", result);
    }
  }
  else
  {
    printf("invalid operation \n");
  }
  return 0;
  } 

