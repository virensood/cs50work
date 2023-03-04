
#include<stdio.h>
int main(void)
{
    int length;
    do
    {
     length = get_int("What is the length of your array? ");
    }
    while(length<1);
    int size[length];
    size[0] = 1;
    printf("%i" , size[0]);
    for (int i = 1; i < length; i++)
    {
        size[i] = 2 * size[ i -1 ];
        printf("%i", size[i]);
    }
}