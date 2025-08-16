SRC = main.cpp
OBJS = ${SRC:.cpp=.o}

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = easyfind
RM = rm -f

all: ${NAME}

%.o: %.cpp easyfind.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CPP} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean
