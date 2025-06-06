/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:20:23 by andresga          #+#    #+#             */
/*   Updated: 2023/12/19 11:52:19 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_UP "0123456789ABCDEF"
# define HEX_LW "0123456789abcdef"

int		ft_printf(char const *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
int		ft_strlen(char *str);
void	ft_putnbr(int num, int *count);
void	ft_put_base(unsigned int n, int *count, char *base);
void	ft_putptr(void *ptr, int *count);
void	ft_put_base_long(unsigned long int n, int *count, char *base);

#endif