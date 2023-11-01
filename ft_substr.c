#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t max_size = 0;
    
    char *str = (char *)malloc(sizeof(char const *) * (len + 1));

    s += start;

    while(*s && max_size < len)
    {
        str[max_size++] = *s;
        s++;
    }
    str[max_size] = 0;
    return(str);
}

// int main()
// {
//     const char *input = "This is a test string";
//     unsigned int start = 5;
//     size_t len = 4;

//     char *result = ft_substr(input, start, len);

//     if (result != NULL)
//     {
//         printf("Original string:%s\n", input);
//         printf("Substring:%s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation error.\n");
//     }

//     return 0;
// }
