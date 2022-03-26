#include<stdio.h>
int main()
{
 int a[10][20],b[10][10],c[10][10],i,j,k,m,n,p,q;
 printf("enter order of matrix\n");
 scanf("%d%d",&n,&m);
 printf("enter order of matrix\n");
 scanf("%d%d",&p,&q);
 if(m!=p)
  {
   printf("matrix multiplucation\n");
   return 1;
  }
 printf("enter the elements\n");
 for(i=0;i<n;i++)
 { 
  for(j=0;j<m;j++)
   { 
    scanf("%d",&a[i][j]);
   }
 }
 printf("enter the elements of matrix 2:\n");
 for(i=0;i<p;i++)
 { 
  for(j=0;j<q;j++)
   {
  scanf("%d",&b[i][j]);
  }
 }
 for(i=0;i<1;i++)
 {
  for(j=0;j<q;j++)
   {
    c[i][j]=0;
    for(k=0;k<p;k++)
    {
    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
   }
   }
 }
 printf("RESULTANT MATRIX");
 for(i=0;i<n;i++)
 {
  for(j=0;j<q;j++)
  { 
   printf("%d\t",c[i][j]);
  }
  printf("\n");
 }
 return 0;
}


