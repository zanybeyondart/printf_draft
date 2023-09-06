#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

// int test_printf(const char * a,...)
// {
//     va_list list;
//     va_list main_arg;
//     const char *str;
//     va_start(list, a);
//     str = va_arg(list, const char*);
//     printf("%s", str);
//     return(1);
// }

// int test_printf(const char *a, ...) {
//     va_list list;
//     const char *str;
//     va_start(list, a);
//     va_arg(list, const char *);
//     str = va_arg(list, const char *);    
//     printf("%s", str);
//     va_end(list);
//     return 1;
// }
int check_type(const char *a)

int test_printf(const char *a, ...) {
    va_list list;
    const char *str;
    check_type(a);
    va_start(list, a);
    str = va_arg(list, const char *);    
    printf("%s", a);
    va_end(list);
    return 1;
}

int main ()
{
    test_printf("zai", "jhgjhg");
}