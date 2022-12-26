#include <stdio.h>
#include "ft_printf.h"

// "puxX%"

int main()
{
    int a = 0,b=0;
    int *ptr;
    ptr = &a;
    a = ft_printf("\n\naaa %c ddd %% eee %s fff %d ggg %i hhh %p jjj \n", 'b', "string", 3, 72, ptr); 
    // % tek varsa ne olacak -> hata mı verecek?
    b = printf("\n\naaa %c ddd %% eee %s fff %d ggg %i hhh %p jjj \n", 'b', "string", 3, 72, ptr);
    printf("a: %d\nb: %d",a,b);

    return 0;
}