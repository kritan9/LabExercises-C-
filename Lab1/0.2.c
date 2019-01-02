#include<stdio.h>
int main()
{
    int i=0;
    char sent[]="idea without execution is worthless";
    char *p=sent;
    while(*p!='c')
    {
        i++;
        p++;
    }
    printf("The character 'c' is after %d characters",i);
    getch();
}

