#include "libft.h"

// int main(int argc, char **argv)
// {
//     char *p = ft_strtrim(argv[1], argv[2]);
//     printf("%s", p);
//     return (0);
// }

int main()
{
    char *str = "hello";
    char *set = "lo";
    char *p = ft_strtrim(str, set);
    printf("%s", p);
    return (0);
}