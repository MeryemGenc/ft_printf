#include <stdio.h>
#include "ft_printf.h"

// "puxX%"

int main()
{
    int a = 0;
    int b = 0;
    int ui = 22187;
    int *ptr;
    ptr = &ui;
    // ptr = &a;
    // a = ft_printf("\n\naaa %c ddd %% eee %s fff %d ggg %i hhh %x jjj %X kkk \n", 'b', "string", 3, 72, ui, ui); 
    // // % tek varsa ne olacak -> hata mı verecek?
    // b = printf("\n\naaa %c ddd %% eee %s fff %d ggg %i hhh %x jjj %X kkk \n", 'b', "string", 3, 72, ui, ui);
    //printf("%s",ft_itoa_hexa(ui, UPPER_HEX));


    // HEXA'LAR KONTROL
    // a = printf("%x jjj %X kkk \n", ui, ui);
    // b = ft_printf("%x jjj %X kkk \n", ui, ui);
    // printf("a: %d \nb: %d",a,b);


    // POINTER KONTROL
    a = printf("%p\n", ptr);
    b = ft_printf("%p\n", ptr);
    printf("a: %d \nb: %d",a,b); // print_hexa ları undigned long yapmayı dene

    return 0;
}