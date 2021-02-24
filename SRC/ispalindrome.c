#include "myutils.h"
int isPalindrome(int num)
{
   int reverse = 0, remainder=0, original=num;
while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (original == reverse)
    {
         return 1;
    }
    else
        {
           return 0;
        }
 
}
