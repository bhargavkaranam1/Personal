#include<stdio.h>
int main()
{
  int T,i,N,k,count=1;
  scanf("%d",&T);
  int rank[T];
  if(T<10)
  {
    for(i=T;i>0;i--)
    {
      l:scanf("%d",&N);
      for(k=0;k<N;k++)
      {
        scanf("%d",&rank[k]);
      }
      for(k=0;k<N;k++)
      {
       if(N>=3)
       {
        if(k%2==0)
        {
          count=count+2;
        }
        else
        {
          count=count;
        }
       }
       else if (N>=1)
       {
           if(rank[k]==rank[k+1])
           {
               count=2;
           }
           else
           {
               count=3;
           }
       }
       else if (N==0)
       {
         count=0;
       }

      }
      printf("\n%d",count);
      count=0;
    }
  }
}
