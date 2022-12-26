#include "ft_printf.h"

int ft_print_char(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_print_str(char *s)
{
    int size;

    size = 0;
    while (s[size])
    {
        write(1, &s[size], 1);
        size++;
    }
    return size;
}

size_t number_len(int nb)
{
    int len;

    len = 0;
    if (nb <= 0)
        len++;
    while (nb)
    {
        len++;
        nb = nb / 10;
    }
    return (len);
}

char *ft_itoa(int n)
{
    int len;
    char *str;
    long nb;

    len = number_len(n);
    nb = n;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    if (nb == 0)
        str[0] = '0';
    str[len--] = '\0';
    while (nb)
    {
        str[len] = nb % 10 + '0';
        len--;
        nb = nb / 10;
    }
    return (str);
}

int ft_print_nbr(int n)
{
    int length;
    char *str;

    length = 0;
    str = ft_itoa(n);
    length = ft_print_str(str);
    free(str);
    return length;
}

int ft_strlen(const char *s)
{
    int a;

    a = 0;
    while (s[a])
        a++;
    return (a);
}

char *ft_strchr(const char *s, int c)
{
    if ((char)c == 0)
        return ((char *)(s + ft_strlen(s)));
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    return (0);
}
