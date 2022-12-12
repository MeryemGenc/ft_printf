#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_print_char(int c);
int ft_print_percent();
int ft_printf(const char *s, ...);

#endif