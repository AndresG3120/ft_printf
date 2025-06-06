/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_family.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:04:25 by andresga          #+#    #+#             */
/*   Updated: 2023/12/19 11:53:21 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long int	copia;

	copia = n;
	if (copia < 0)
	{
		copia = (copia * -1);
		ft_putchar('-', count);
	}
	if (copia > 9)
	{
		ft_putnbr(copia / 10, count);
		ft_putchar((copia % 10) + '0', count);
	}
	else
		ft_putchar(copia + '0', count);
}

void	ft_putptr(void *ptr, int *count)
{
	unsigned long	c;

	c = (unsigned long)ptr;
	ft_putstr("0x", count);
	ft_put_base_long(c, count, HEX_LW);
}

void	ft_rev_char_tab(char *tab, int size)
{
	int		c;
	char	aux;

	c = 0;
	size--;
	while (c < (size - c))
	{
		aux = tab[c];
		tab[c] = tab[size - c];
		tab[size - c] = aux;
		c++;
	}
}

void	ft_put_base_long(unsigned long int n, int *count, char *base)
{
	unsigned long int	len;

	len = ft_strlen(base);
	if (n >= len)
	{
		ft_put_base_long(n / len, count, base);
		ft_putchar(base[n % len], count);
	}
	else
		ft_putchar(base[n], count);
}

void	ft_put_base(unsigned int n, int *count, char *base)
{
	unsigned int	len;

	len = ft_strlen(base);
	if (n >= len)
	{
		ft_put_base(n / len, count, base);
		ft_putchar(base[n % len], count);
	}
	else
		ft_putchar(base[n], count);
}
