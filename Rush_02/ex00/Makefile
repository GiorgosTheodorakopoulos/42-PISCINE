CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = a.out

$(NAME): rush-02.o check_dict.o argv_1_2.o write.o argv_3.o modulo3_2.o	check_array_pattern.o help_func.o
	$(CC) $(CFLAGS) -o $(NAME) rush-02.o check_dict.o argv_1_2.o write.o argv_3.o modulo3_2.o check_array_pattern.o help_func.o

rush-02.o: rush-02.c
	$(CC) $(CFLAGS) -c rush-02.c

check_dict.o: check_dict.c 
	$(CC) $(CFLAGS) -c check_dict.c

argv_1_2.o: argv_1_2.c
	$(CC) $(CFLAGS) -c argv_1_2.c

find_write.o: write.c
	$(CC) $(CFLAGS) -c write.c

argv_3.o: argv_3.c
	$(CC) $(CFLAGS) -c argv_3.c

modulo3_2.o: modulo3_2.c
	$(CC) $(CFLAGS) -c modulo3_2.c

check_array_pattern.o: check_array_pattern.c
	$(CC) $(CFLAGS) -c check_array_pattern.c

help_func.o: help_func.c
	$(CC) $(CFLAGS) -c help_func.c

clean:
	rm -f *.o $(NAME)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
