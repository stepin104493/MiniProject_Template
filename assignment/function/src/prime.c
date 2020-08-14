#include "prime.h"
int primenum(int num)
{
int flag=1;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=0;//not prime
            break;
        }

    }
    if(flag==1)
        return 1;
    else
        return 0;
}

