#include "file.h"

  int ft_memcmp(const void * pointer1,const void * pointer2, size_t size )
  {
    unsigned char *ptr1 = (unsigned char *)pointer1;
    unsigned char *ptr2 = (unsigned char *)pointer2;

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

    printf("difference ascii : %d\n", ft_memcmp(str, str2, 5));

    free(str);
    free(str2);

    return 0;
  }