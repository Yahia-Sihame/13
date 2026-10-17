/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysihame <ysihame@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:36:31 by ysihame           #+#    #+#             */
/*   Updated: 2026/10/16 18:09:27 by ysihame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	long	divisor;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	divisor = 1;
	while (nb / divisor > 9)
	{
		divisor = divisor * 10;
	}
	while (divisor > 0)
	{
		ft_putchar_fd((nb / divisor) + '0', fd);
		nb = nb % divisor;
		divisor = divisor / 10;
	}
}
