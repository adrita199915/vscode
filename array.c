#include<stdio.h>
int main()
{int n;
scanf("%d",&n);
    int ar[n];
   
     for( int i=0;i<5;i++)
    {
       scanf("%d",&ar[i]);
    }
    for(int i=n-1;i>=0;--i )
    {
        printf("%d\n",ar[i]);
    }
    
    
    return 0;
}