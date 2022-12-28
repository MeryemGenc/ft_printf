#include "ft_printf.h"

int ft_print_p(void *p)
{
    unsigned long long ptr;
    //char *arr;
    int i;

    ptr = (unsigned long long)p;
    i = ft_print_str("0x");
    i += ft_print_hexa_lower(ptr);
    // arr = ft_itoa_hexa(ptr, LOWER_HEX);
    // i += ft_print_str(arr);
    //free(arr);
    return (i);
}