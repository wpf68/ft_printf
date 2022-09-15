/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:00:36 by pwolff            #+#    #+#             */
/*   Updated: 2022/03/08 10:49:28 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

char	*ft_itoa(int n);
char	*ft_itoa_unsigned(unsigned int n);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *c, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_printf(const char *tab, ...);
void	ft_printf_c(va_list ap, int *i);
void	ft_printf_s(va_list ap, int *i);
void	ft_printf_d_i(va_list ap, int *i);
void	ft_printf_u(va_list ap, int *i);
void	ft_rev_char_tab(char *tab);
char	*ft_hex_lower(unsigned int nb);
void	ft_printf_x(va_list ap, int *i, char c);
char	ft_toupper(char c);
int		ft_isascii(int c);
void	ft_printf_p(va_list ap, int *i);
char	*ft_hex_lower_long(unsigned long int nb, char *tab_hex);

#endif
