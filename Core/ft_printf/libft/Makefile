CC = cc
CFLAGS = -Wall -Wextra -Werror
CCFLAGS = -I.
NAME = libft
ARNAME = ar rcs $(NAME)
COMPILE = $(CC) $(FLAGS)
FILES = atoi bzero calloc isalnum isalpha isascii isdigit isprint memchr memcmp memcpy memmove memset strchr strdup strlcat strlcpy strlen strncmp strnstr strrchr tolower toupper substr itoa putchar_fd putstr_fd putendl_fd putnbr_fd split striteri strjoin strtrim strmapi
SOURCE = $(foreach file,$(FILES),ft_$(file).c)

OBJS := $(SOURCE:%.c=%.o)

all: $(NAME)
$(NAME):$(OBJS)
	$(ARNAME).a $(OBJS)

%.o: %.c
	$(COMPILE) $(CCFLAGS) $(CFLAGS) -o $@ -c $<

clean:
	rm -f *.o

fclean:
	rm -f $(NAME).a

re: fclean all
