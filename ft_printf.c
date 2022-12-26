#include "ft_printf.h"

int format_selector(va_list args, char c) // kac karakter yazdirdigini donecek - tum fonksiyonlar geriye int donecek
{
    if (c == '%')
        return ft_print_char('%');
    if (c == 'c')
        return ft_print_char(va_arg(args, int));
    if (c == 's')
        return ft_print_str(va_arg(args, char *));
    if (c == 'd')
        return ft_print_nbr(va_arg(args, int));
    // if (c == 'c')
    //     return ft_print_char(c);
}

// % + selector kullanmama durumunda length artacak mı? % yi yazdıracak mı? error mu yollatmalıyız?
int ft_printf(const char *s, ...)
{
    va_list args;
    int length;

    va_start(args, s);
    length = 0;
    while (*s)
    {
        if (*s == '%')
        {
            if (ft_strchr(SELECTORS, *(++s))) // if e girmese bile kosuldaki arttırımları yaptıgından emin ol
                length += format_selector(args,*s);
        }
        else
        {
            ft_print_char(*s);
            length++;
        }
        s++;
    }
    va_end(args);
    return length;
}