/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:32:20 by engirald          #+#    #+#             */
/*   Updated: 2023/01/24 17:09:10 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  index;

    index = 0;
    while (index < n)
    {
        if (((unsigned char *)s)[index] == (unsigned char)c)
            return (((unsigned char *)s) + index);
        index++;
    }
    return (NULL);
}

