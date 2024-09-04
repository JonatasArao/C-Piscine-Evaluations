CC      = cc
CFLAGS= -Wall -Wextra -Werror -g
LDFLAGS = $(CFLAGS)
RM      = rm -rf
NAME	= a.out
OBJS	= ft_putstr.o

all: $(NAME) clean

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) main.c $(OBJS) -o $(NAME)

%.o: %.c <br>
	$(COMPILE.c) $(OUTPUT_OPTION) $<<br>

%: %.o <br>
	$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@<br>

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all
