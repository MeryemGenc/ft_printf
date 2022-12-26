#include <stdio.h>
#include "ft_printf.h"

int main()
{
    int a = 0,b=0;
    a = ft_printf("aaa %c ddd %% eee %s fff %d ggg", 'b', "string", 3); // %s : segmentation fault
    // % tek varsa ne olacak
    b = printf("\n\naaa %c ddd %% eee %s fff %d ggg\n",'b',"string",3);
    printf("a: %d\nb: %d",a,b);

    return 0;
}