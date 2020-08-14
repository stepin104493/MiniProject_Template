#include <stdio.h>
#include <stdlib.h>
#include "test_func.h"

int add(int a,int b);

int sub(int a,int b);

int main(void)
{
	test_main();
	int result1,result2;
    int (*sum)(int,int)=add;
    int (*dif)(int,int)=sub;
    result1=sum(10,20);
    result2=dif(60,30);
    printf("Addition of 10 and 20 : %d",result1);
    printf("\nSubtraction of 30 from 60 : %d",result1);
	return 0;
}

