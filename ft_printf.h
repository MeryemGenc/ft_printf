#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef SELECTORS
#  define SELECTORS "cspdiuxX%"
# endif
#ifndef LOWER_HEX
#  define LOWER_HEX "0123456789abcdef"
# endif
# ifndef UPPER_HEX
#  define UPPER_HEX "0123456789ABCDEF"
# endif


int ft_print_char(int c);
int ft_print_str(char *s);
char *ft_itoa(int n);
int ft_print_nbr(int n);
int ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
int ft_print_p(void *p);
char *ft_itoa_hexa(unsigned int number, char *base);
int ft_print_hexa_upper(unsigned int number);
int ft_print_hexa_lower(unsigned int number);
int ft_printf(const char *s, ...);

#endif