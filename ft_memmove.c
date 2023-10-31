#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *ptr_dst = (unsigned char *)dst;
    unsigned char *ptr_src = (unsigned char *)src;
    size_t i = 0;

    if(dst > src)
        while(n > 0)
        {
              ptr_dst[n - 1] = ptr_src[n - 1];
              n--;
        }
    else
        while(i++ < n)
        {
              ptr_dst[i] = ptr_src[i];
              i++;
        }
    return(dst);
}

int   main(void)
  {
    char *dst = strdup("contigo");
    char *src = strdup("poco loco"); 

    printf("dst : %s / %p\n", dst, ft_memmove(dst, src, 10));

    free(dst);
    free(src);

    return 0;
  }