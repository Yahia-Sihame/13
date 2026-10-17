/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysihame <ysihame@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:49:57 by ysihame           #+#    #+#             */
/*   Updated: 2026/10/15 17:25:48 by ysihame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*charr;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	charr = (unsigned char *)s;
	while (i < n)
	{
		*(charr++) = c;
		i++;
	}
	return (s);
}
