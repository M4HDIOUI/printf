NAME = libftprintf.a

F = -Wall -Wextra -Werror

cc = cc

hd = ft_printf.h

fts = ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_puthexlower.c \
	ft_puthexuper.c \
	ft_printf.c \
	ft_putnbru.c 

obj = $(fts:.c=.o)

all: $(NAME) 

$(NAME): $(obj)
	ar -rc $(NAME) $(obj)

%.o : %.c $(hd)
	$(cc)  $(F) -c $<

clean :
	rm -rf  $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all