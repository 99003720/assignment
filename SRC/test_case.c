
#include "bitmask.h"
#include "mystring.h"
#include "myutils.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
 
int length=0;
char str_input1[20] = "hello";
char str_input2[20] = "hello";
length = mystrlen(str_input1);
  printf("Length: %d\n", length);
//7573043999



if(mystrcmp(str_input1,str_input2) == 1)
{
 printf("Not the same string\n");
}
else
{
   printf("Same string\n"); 
}

int x = 0;
int set_val=0;
set_val = myset(x);
printf("The number is set to %d\n",set_val);


int y = 1;
int reset_val=0;
reset_val = myreset(y);
printf("The number is reset to %d\n",reset_val);



int num = 121;
int answer = 0;
answer = isPalindrome(num);
if(answer==1)
{
  printf("Palindrome number\n");
}
else
{
  printf("Not a palindrome number\n");
}

int numb = 12;
int prime_num;
 prime_num = isPrime(numb);
  if(prime_num == 0)
 {
   printf("Not a prime number\n");
 }
 else
 {
   printf("A prime number\n");
 }

long find_fact = 3,factor=0;
factor = find_factorial(find_fact);
if(factor == -1)
{
  printf("Not a valid number\n");
}
else
{
  printf("Factorial: %ld\n",factor);
}

printf("%d\n",vsum(4,1,2,3,4));


int flip_f = 1;
int flip_val=0;
flip_val = flip(flip_f);
if(flip_val == 0)
{
  printf("%d\n",flip_val);
}
else if(flip_val == 1)
{
  printf("%d\n",flip_val);
}
else
{
  printf("Enter a valid number\n");
}
  return 0;

}


