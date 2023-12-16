#include "ft_printf.h"

int main()
{
    char b[] = "asdafjgd";
    char *a = b;

    ft_printf("%s\n%d\n%c\n%u\n%x\n%X\n%%\n%p\n", b, 45, 'c', 43, 999, 999, a);
    return 0;
}
