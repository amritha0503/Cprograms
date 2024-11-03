#include<stdio.h>
void main()
{
    int n,a,i,j;
    printf("How many numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        
         for(j=1;j<=2*(n-i)+1;j++)
         {
          printf(" ");
         }
         for(a=1;a<=2*i-1;a++)
         {
         printf("* ");
         }
         
         printf("\n");
        }
        
        
    }