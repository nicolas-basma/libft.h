#include "libft.h"

// int main(int argc, char **argv)
// {
//     char *p = ft_strtrim(argv[1], argv[2]);
//     printf("%s", p);
//     return (0);
// }

int	main(void)
{
	char *str = "hello world";
	char *set = "ho";
	char *p = ft_strtrim(str, set);
	printf("%s", p);
	return (0);
}