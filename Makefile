EXECUTABLE=lem_in

D_LIBFT=./libft
I_LIBFT=-I $(D_LIBFT)/
L_LIBFT=-L $(D_LIBFT) -lft

CC=gcc

INC=$(I_LIBFT)

CFLAGS=-Wall -Wextra -Werror -g $(INC)

SRCS =		./lem_in.c\
			./pathnew.c\
			./find_paths.c\
			./getpaths.c\
			./read.c\
			./roomnew.c\
			./setlink.c\
			./setpath.c\
			./setroom.c\
			./solvefarm.c\
			./terminate.c\
			./wayadd.c\
			./waynew.c\
			./wayrev.c\

HEADERS =	./lem_in.h

OBJS = $(patsubst %.c,%.o, $(SRCS))

all: $(EXECUTABLE)

$(EXECUTABLE): $(L_LIBFT) $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) -lm $(L_LIBFT)
	@echo "===>$(EXECUTABLE) has been builded"

$(L_LIBFT):
	@echo "===>Building libft for lem_in if needed..."
	@make -C $(D_LIBFT)
	@echo "===>Libft has been builded!"
	@echo "===>Building $(EXECUTABLE)"

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	make -C $(D_LIBFT) clean
	rm -rf $(OBJS)
	rm -rf $(OBJS2)

fclean: clean
	make -C $(D_LIBFT) fclean
	rm -rf $(EXECUTABLE)
	rm -rf $(D_SDL)

re: fclean all