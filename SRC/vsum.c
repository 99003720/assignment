#include"myutils.h"

int vsum(int a, ...)
{
 va_list valist;
 int sum=0;
 int i;

 va_start(valist,a);
 for(i=0;i<a;i++)
    {
 sum+=va_arg(valist,int);
    }

 va_end(valist);
 return sum;
}

