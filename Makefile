NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

CSRCBONUS = $(CFILES) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
OBJS = $(CFILES:.c=.o)
OBJBONUS = $(CSRCBONUS:.c=.o)
RM = rm -rf
AR = ar -rc

all : $(NAME)
	@echo libft.a created successfully...
bonus : $(OBJBONUS)
	@$(AR) $(NAME) $(OBJBONUS)
	@echo Compiling p1 and p2 with bonus...
$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo Compiling part1 and part2...
.c.o :
	@cc $(FLAGS) -c $^ -o $@
clean :
	@$(RM) $(OBJS) $(OBJBONUS)
fclean : clean
	@$(RM) $(NAME)
re : fclean all