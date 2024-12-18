#include "ft_printf.h"

int ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
	
}

void ft_put_hex(unsigned int num, const char hex_case)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, hex_case);
		ft_put_hex(num % 16, hex_case);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar(num + '0');
		}
		else
		{
			if (hex_case == 'x')
				ft_putchar(num - 10 + 'a');
			if (hex_case == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int ft_print_hex(unsigned int num, const char hex_case)
{
    if (num == 0)
    {
        return (write(1, "0", 1));
    }
    else
    {
        ft_put_hex(num, hex_case);
    }
    return (ft_hex_len(num));
}
