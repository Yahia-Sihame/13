/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysihame <ysihame@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:59:26 by ysihame           #+#    #+#             */
/*   Updated: 2026/10/13 16:16:53 by ysihame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*charr;
	size_t			i;

	i = 0;
	charr = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		*(charr++) = 0;
		i++;
	}
}
