#include "ft_printf.h"

size_t ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    int i = 0;
    while (s[i] != 0)
    {
        ft_putchar(s[i]);
        i++;
    }
}

int ft_print_str(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        ft_putstr("(null)");
        return (6);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	if (src == NULL)
	{
		return (0);
	}
	if (dstsize == 0)
	{
		return (len);
	}
	while ((i < (dstsize - 1)) && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
	{
		return (NULL);
	}
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



int ft_print_nbr(int n)
{
    int len;
    char *num;

    len = 0;
    num = ft_itoa(n);
    len = ft_print_str(num);
    free(num);
    return (len);
}

int ft_print_percent(void)
{
    write(1, "%%", 1);
    return (1);
}