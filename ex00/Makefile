
#--------------------------------- VARS ---------------------------------
NAME		= megaphone

SRC			= megaphone.cpp

OBJS		= $(SRC:.cpp=.o)

COMPILE		= clang++

FLAGS		= -Wall -Wexra -Werror -std=c++98

EXE_NAME	= -o megaphone

EXEX		= megaphone

#--------------------------------- RULES ---------------------------------

all: $(NAME)

$(NAME) : $(OBJS) Makefile
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)

re: fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

#--------------------------------- TESTS ---------------------------------

test1: all
	./$(EXEC) "shhhhh... I think the students are asleep..."

test2: all
	./$(EXEC) Damnit " ! " "Sorry students, I thought this thing was off."

test3: all
	./$(EXEC)

.PHONY:	all clean fclean re test1 test2 test3
