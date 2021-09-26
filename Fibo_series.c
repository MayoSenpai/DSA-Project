#include <stdio.h>

int main()
{
      int a[60000]={0};
      int b[60000]={0};
      int soln[60000]={0};
      a[0]=0;
      b[0]=1;
      int carr=0;
      int numb;
      scanf("%d",&numb);
      if(numb==1)
      {
        printf("0\n");
      }
      else{
        numb=numb-1;
      for(int i=0;i<numb;i++)
      {
          for(int j=0;j<59999;j++)
          {
            soln[j]=a[j]+b[j]+carr;
            carr=0;
            int current=soln[j];
            if(current>=10)
            {
              soln[j]=current%10;
              carr=current/10;
            }
          }
            for(int j=(numb-1);j>=0;j--)
            {
              b[j]=a[j];
              a[j]=soln[j];
            }
        }
        int true=0;
        for(int j=59999;j>=0;j--)
        {
          if(true==1 || soln[j]!=0)
          {
            printf("%d",soln[j]);
            true=1;
          }
        }
      }
}

