/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:55:56 by pwolff            #+#    #+#             */
/*   Updated: 2022/03/07 14:37:30 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_fill_tab(char *str, unsigned int *nbr, int *i)
{
	*i = *i - 1;
	while (*nbr / 10)
	{
		str[*i] = *nbr % 10 + '0';
		*i = *i - 1;
		*nbr /= 10;
	}
	str[*i] = *nbr % 10 + '0';
}

static void	ft_size_tab(unsigned int *nbr, int *i)
{
	unsigned int	nb2;

	*i = 1;
	nb2 = *nbr;
	while (nb2 != 0)
	{
		*i = *i + 1;
		nb2 = nb2 / 10;
	}
}

static char	*ft_zero(void)
{
	char	*tab;

	tab = (char *)malloc(sizeof(char) * 2);
	if (tab == NULL)
		return (NULL);
	tab[0] = '0';
	tab[1] = '\0';
	return (tab);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	int		i;
	char	*str;

	if (n == 0)
		return (ft_zero());
	ft_size_tab(&n, &i);
	str = (char *)malloc(sizeof(char) * (i));
	if (str == NULL)
		return (NULL);
	i--;
	str[i] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	ft_fill_tab(str, &n, &i);
	return (str);
}

/*
Prototype 
char *ft_itoa(int n);

Paramètres 
n: L’entier à convertir.

Valeur de retour 
La chaîne de caractères représentant l’entier.
NULL si l’allocation échoue.

Fonctions externes autorisées
malloc

Description 
Alloue (avec malloc(3)) et retourne une chaîne
de caractères représentant l’entier ’n’ reçu en
argument. Les nombres négatifs doivent être gérés.

*/
