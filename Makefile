
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	   ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strdup.c \
	   ft_substr.c ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_isprint.c \
	   ft_putnbr_fd.c ft_strtrim.c ft_memcpy.c ft_memmove.c ft_memset.c \
	   ft_memcmp.c ft_memchr.c ft_bzero.c ft_calloc.c ft_striteri.c
BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
	    ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	   	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
		
OBJ = $(SRCS:.c=.o)
BOBJ = $(BSRCS:.c=.o)
NAME = libft.a

all: $(NAME)
	@echo "All Good"

bonus:	$(BOBJ)
	@echo "Bonus Good"
	@$(AR) $(NAME) $(BOBJ)
	
	

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaned"
	@$(RM) $(OBJ) $(BOBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
