# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 11:17:28 by aelkhali          #+#    #+#              #
#    Updated: 2022/10/27 10:00:15 by aelkhali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###-----------------Variables-----------------###
NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

#FILES------
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

CSRCBONUS = $(CFILES) ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
			
OBJS = $(CFILES:.c=.o)

OBJBONUS = $(CSRCBONUS:.c=.o)

RM = rm -rf

AR = ar -rc

###-----------------Rules-----------------###
all : $(NAME)

bonus : $(OBJBONUS)
	@$(AR) $(NAME) $(OBJBONUS)
	@echo "Compiling p1, p2 with bonus..."

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Compiling part1 and part2..."
	@echo "libft.a created successfully..."

.c.o :
	@cc $(FLAGS) -c $< -o $@

clean :
	@echo "cleaning the object files..."
	@$(RM) $(OBJS) $(OBJBONUS)

fclean : clean
	@echo "cleaning Everything..."
	@$(RM) $(NAME)

re : fclean all
