#include"myutils.h"

int isPrime()
{
 int i,inp,op=0;
 for(i=2;i<=inp/2;i++)
    {
 if((inp%i)==0)
        {
 op=1;
 printf("\nNot Prime");
 break;
        }
    }
 if(op==0)
    {
 printf("Prime");
    }
}