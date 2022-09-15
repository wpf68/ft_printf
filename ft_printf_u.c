/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:00:51 by pwolff            #+#    #+#             */
/*   Updated: 2022/03/07 14:21:59 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(va_list ap, int *i)
{
	char	*tab;

	tab = ft_itoa_unsigned(va_arg(ap, unsigned int));
	ft_putstr_fd(tab, 1);
	*i = *i + ft_strlen(tab);
	free(tab);
}
