#include "libft.h"

int ft_isprint(int c)
{
    return(c >= 32 && c <= 126);
}

// //yo

// int main(void)
// {
//     // return 0

//     printf("0 : %d\n", ft_isprint('\n'));
//     printf("0 : %d\n", ft_isprint('\t'));
//     printf("0 : %d\n\n", ft_isprint('\v'));

//     // return 1

//     printf("1 : %d\n", ft_isprint('a'));
//     printf("1 : %d\n", ft_isprint('0'));
//     printf("1 : %d\n", ft_isprint('2'));
//     printf("1 : %d\n", ft_isprint(' '));

//     return (0);
// }