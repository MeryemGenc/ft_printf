
#include "../includes/libft.h"
#include "../includes/ft_printf.h"

int ft_print_char(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_print_percent()
{
    write(1, '%', 1);
    return (1);
}

int ft_printf(const char *s, ...)
{
    
    return 0;
}