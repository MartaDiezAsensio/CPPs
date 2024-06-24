NAME		=	ex00

SRC			=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	g++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

EXE_NAME	=	-o $(NAME)

EXEC		=	$(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re run
