#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if(s1 == NULL || s2 == NULL)
        return (NULL);

    char *str;

    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));

    char *result = str;

    while(*s1)
        *str++ = *s1++;
    while(*s2)
        *str++ = *s2++;
    *str = '\0';
    return(result);
}

// int main(void)
// {
//     char *s1 = "this is the";
//     char *s2 = " absolute test";

//     char *result = ft_strjoin(s1, s2);

//     if(result == NULL)
//         printf("s1 || s2 empty");
//     else
//     {
//         printf("%s:%s -> [%s]\n", s1, s2, result);
//         free(result);
//     }

//     return (0);
// }