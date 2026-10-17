/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysihame <ysihame@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:16:59 by ysihame           #+#    #+#             */
/*   Updated: 2026/10/13 22:10:21 by ysihame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src1;
	unsigned char		*dest1;

	if (!dest && !src)
		return (NULL);
	src1 = (const unsigned char *)src;
	dest1 = (unsigned char *)dest;
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n > 0)
		{
			*(dest1 + (n - 1)) = *(src1 + (n - 1));
			n--;
		}
	}
	return (dest);
}
