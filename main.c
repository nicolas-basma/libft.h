#include "libft.h"

// int main(int argc, char **argv)
// {
//     char *p = ft_strtrim(argv[1], argv[2]);
//     printf("%s", p);
//     return (0);
// }

int	main(void)
{
	char *str = "hello,world,hello,malaga";
	char c = ',';
	ft_split(str, c);
	return (0);
}