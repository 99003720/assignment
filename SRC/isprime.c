#include"myutils.h"

int isPrime(int input)
{
 int i,output=0;
 for(int i=2;i<=input/2;i++)
    {
 if((input%i)==0)
        {
 output = 1;
 break;
        }

    }
 if(output==0)
    {
 return 0;
     }
     else
     {
        return 1;
     }
}