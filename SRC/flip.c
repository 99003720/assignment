#include "bitmask.h"

int flip(int num)
{
    if(num==1)
    {
        return 0;
    }
    else if(num==0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}