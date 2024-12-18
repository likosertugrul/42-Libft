/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:07:40 by elikos            #+#    #+#             */
/*   Updated: 2024/12/18 20:35:32 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;

	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, len + 1);
	return (s2);
}

int	ft_num_of_digits(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		digit;
	int		is_negative;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digit = ft_num_of_digits(n);
	is_negative = (n < 0);
	if (is_negative)
		digit++;
	str = malloc(digit + 1);
	if (!str)
		return (NULL);
	str[digit] = '\0';
	if (is_negative)
	{
		str[0] = '-';
		n = -n;
	}
	while (digit > is_negative)
	{
		str[--digit] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

int	ft_print_nbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_print_str(num);
	free(num);
	return (len);
}

int	ft_print_percent(void)
{
	write(1, "%%", 1);
	return (1);
}
