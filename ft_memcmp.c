#include "libft.h"

  int ft_memcmp(const void * pointer1, const void * pointer2, size_t size )
  {
    return (ft_strncmp((char *)pointer1, (char *)pointer2, size));
  }

  // int   main(void)
  // {
  //   char *str = strdup("poco loco");
  //   char *str2 = strdup("poco loco"); 

  //   printf("difference ascii : %d\n", ft_memcmp(str, str2, 5));

  //   free(str);
  //   free(str2);

  //   return 0;
  // }