SRC = main.cpp
OBJS = ${SRC:.cpp=.o}

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = mutantStack
RM = rm -f

all: ${NAME}

%.o: %.cpp mutantStack.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CPP} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean