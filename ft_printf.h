/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:35:55 by elikos            #+#    #+#             */
/*   Updated: 2024/12/18 20:39:34 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);

void	ft_putchar(char c);

void	ft_putstr(char *s);

int		ft_print_str(char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

char	*ft_strdup(const char *s1);

int		ft_num_of_digits(int n);

char	*ft_itoa(int n);

int		ft_print_nbr(int n);

int		ft_print_percent(void);

int		ft_print_hex(unsigned int num, const char format);

int		ft_print_ptr(unsigned long long ptr);

int		ft_print_unsigned(unsigned int n);

int		ft_formats(va_list args, const char format);

int		ft_printf(const char *str, ...);

#endif