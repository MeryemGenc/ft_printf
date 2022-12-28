#include "ft_printf.h"

int hexa_length(unsigned int number)
{
    int counter;

    counter = 1; // cunku 0: 1 basamaklı
    while (number >= 16)
    {
        number /= 16;
        counter++;
    }
    return (counter);
}

char *ft_itoa_hexa(unsigned int number, char *base)
{
    char *arr;
    int counter;
    int temp;

    counter = hexa_length(number);
    temp = number;
    arr = malloc((counter + 1) * sizeof(char));
    if (!arr)
        return (NULL);
    arr[counter] = '\0';
    while (counter)
    {
        counter--;
        arr[counter] = base[temp % 16];
        temp /= 16;
    }
    return (arr);
}

int ft_print_hexa_upper(unsigned int number)
{
    int i;
    char *arr;

    arr = ft_itoa_hexa(number, UPPER_HEX);
    i = ft_print_str(arr);
    free(arr);
    return (i);
}

int ft_print_hexa_lower(unsigned int number)
{
    int i;
    char *arr;

    arr = ft_itoa_hexa(number, LOWER_HEX);
    i = ft_print_str(arr);
    free(arr);
    return (i);
}