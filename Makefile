NAME = libftprintf.a

FLAG = -Wall -Wextra -Werror

SRC = ft_print_hex.c  ft_print_ptr.c ft_print_unsigned.c ft_print_helpers.c ft_printf.c \
		ft_strlen.c ft_putchar.c ft_putstr.c ft_printstr.c ft_strlcpy.c 

OBJ = $(SRC:.c=.o)


$(NAME) : 
	cc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)

all : $(NAME)

clean : 
	/bin/rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

run : re
	cc $(FLAG) main.c libftprintf.a
	make fclean
	clear
	./a.out

push : 
	git add .
	git commit -m "To infinity and beyond"
	git push

.PHONY : all clean fclean re 	
