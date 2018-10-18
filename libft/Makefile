# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlechien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 18:35:19 by tlechien          #+#    #+#              #
#    Updated: 2018/10/16 14:24:11 by tlechien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRCS = memset bzero memcpy memccpy memmove memchr memcmp strlen strdup strcpy \
	   strncpy strcat strncat strlcat strchr strrchr strstr strnstr strcmp \
	   strncmp atoi isalpha isdigit isalnum isascii isprint toupper tolower \
	   memalloc memdel strnew strdel strclr striter striteri strmap strmapi \
	   strequ strnequ strsub strjoin strtrim strsplit itoa putchar putstr \
	   putendl putnbr putchar_fd putstr_fd putendl_fd putnbr_fd lstnew \
	   lstdelone lstdel lstadd lstiter lstmap

FILES = $(addprefix ft_, $(SRCS))

OFILES = $(addsuffix .o, $(FILES))

CFILES = $(addsuffix .c, $(FILES))

O_FILES = $(CFILES:%.c=%.o)

$(NAME): $(O_FILES)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all
