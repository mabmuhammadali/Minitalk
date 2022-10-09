/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:23:24 by mabdulla          #+#    #+#             */
/*   Updated: 2022/09/04 10:08:49 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

static void	ft_rec_signal(int s)
{
	static int	bit = 7;
	static int	set = 0;

	if (s == SIGUSR1)
		s = 1;
	else
		s = 0;
	set = set + (s << bit);
	if (bit == 0)
	{
		ft_printf("%c", set);
		bit = 7;
		set = 0;
	}
	else
		bit--;
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("pid: %d\n", pid);
	signal(SIGUSR1, ft_rec_signal);
	signal(SIGUSR2, ft_rec_signal);
	while (1)
		pause();
}
