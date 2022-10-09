/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:14:39 by mabdulla          #+#    #+#             */
/*   Updated: 2022/09/04 10:09:42 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

static void	ft_send_signal(int pid, char *str)
{
	int				i;
	unsigned char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if ((c >> i) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_printf("Bir sorun var, 3 argüman girmeniz gerekiyor.");
		return (0);
	}
	ft_send_signal(ft_atoi(argv[1]), argv[2]);
	ft_send_signal(ft_atoi(argv[1]), "\n");
}
