#include "test_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** This is the main function.
Here we will find the words in the string, which are separated by _
@param[in] str
*/
int main(void)
{

    test_main();
    char str[40];
    printf("\nenter a string : ");
    scanf("%s",str);
    char *tok =strtok(str,"_");
    while(tok!= NULL)
    {
        printf("%s\n",tok);
        tok= strtok(NULL,"_");
    }

	return 0;
}
