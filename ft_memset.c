/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysihame <ysihame@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:49:57 by ysihame           #+#    #+#             */
/*   Updated: 2026/10/17 21:52:51 by ysihame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*charr;
	size_t			i;

	i = 0;
	charr = (unsigned char *)s;
	while (i < n)
	{
		charr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
