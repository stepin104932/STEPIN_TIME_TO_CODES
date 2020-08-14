//#include "substring.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void substring(char a[1000])
{
    char *c=strtok(a,"_");
    while(c!=NULL)
    {
        printf("%s ",c);
        c=strtok(NULL,"_");
    }

}
