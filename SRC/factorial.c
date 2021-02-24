#include "myutils.h"


long find_factorial(int num)
{
   // long temp_result = 1;
   long fact = 1;
    if (num < 0)
    {
        return -1;
    }
        
    else {
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        return fact;
       
    }
}