#include "libft.h"

int	wrap_malloc(void *p, size_t len)
{
	*(void **)p = malloc(len);
	return (!!*(void **)p);
}
