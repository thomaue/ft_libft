#include "libft.h"

  int ft_memcmp(const void * pointer1, const void * pointer2, size_t size )
  {

    if (pointer1 == NULL || pointer2 == NULL)
      return 0;

    const unsigned char *ptr1 = (const unsigned char *)pointer1;
    const unsigned char *ptr2 = (const unsigned char *)pointer2;

    if (size == 0) 
        return 0;

    while(size > 0)
    {
        if(*ptr1 != *ptr2)
          return(*ptr1 - *ptr2);
        ptr1++;
        ptr2++;
        size--;            
    }
    return(*ptr1 - *ptr2);
  }

  int   main(void)
  {
    char *str = strdup("poco loco");
    char *str2 = strdup("poco loco"); 

    printf("difference ascii : %d\n", ft_memcmp(NULL, NULL, 5));

    free(str);
    free(str2);

    return 0;
  }