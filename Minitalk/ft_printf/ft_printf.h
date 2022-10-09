/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:18:59 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/04 11:54:09 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_atoi(const char *str);
int		ft_numlen(long n);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putunbr(unsigned int n, int *len);
void	ft_puthex_low(size_t num, int *len);
void	ft_puthex_up(unsigned int num, int *len);
void	ft_second_controller(const char **str, va_list list, int *len);
void	ft_cntrl_plus(const char **str, va_list list, int *len);
void	ft_cntrl_zero(const char **str, va_list list, int *len);
void	ft_putunbr_zero(unsigned int n, int count, int *len);
void	ft_putnbr_zero(int n, int count, int *len);
void	ft_putzero(int count, int *len);
void	ft_hexlen(int *len, size_t num);
void	ft_cntrl_dot(const char **str, va_list list, int *len);
void	ft_putnbr_dot(int n, int count, int *len);
void	ft_putstr_dot(char *s, int count, int *len);
void	ft_cntrl_minus(const char **str, va_list list, int *len);
void	ft_putstr_minus(char *s, int count, int *len);
void	ft_putspace(int count, int *len);
void	ft_putnbr_minus(int n, int count, int *len);
void	ft_putunbr_minus(unsigned int n, int count, int *len);
void	ft_ptrlen(int *len, size_t num);
void	ft_cntrl_sharp(const char **str, va_list list, int *len);
void	ft_cntrl_space(const char **str, va_list list, int *len);
size_t	ft_strlen(const char *s);

#endif
