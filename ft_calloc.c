#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *p;

    p = (unsigned char *)s;
    while (n--)
        *p++ = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}

int main(void)
{
    int n = 5;
    int *ptr;

    ptr = (int *)ft_calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return (0);
}
