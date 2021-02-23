#include "mystring.h"
error_t mystrcmp(char* str_input1, char* str_input2,long *result)
{
    if(strcmp(str_input1,str_input2)==0)
    {
        return PASS;
    }
    else
    {
        return FAILURE;
    }
}