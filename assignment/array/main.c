#include <stdio.h>
#include <stdlib.h>
#include "test_array.h"



int sort1(int n,int* ptr)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(ptr+j)<*(ptr+i))
            {
                int t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
    ///printing the sorted numbers
    printf("The sorted array is : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",*(ptr+i));
    }
}
int main(void)
{
	test_main();
	int n;
    int* ptr;
    printf("enter size : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("\nenter the array : ");
    if (ptr==NULL)
    {
        exit(0);
    }
    else
    {
          for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    }

    sort1(n,ptr);
//    void free(int*ptr);
	return 0;
}




