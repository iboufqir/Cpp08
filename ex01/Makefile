SRC = main.cpp Span.cpp
OBJS = ${SRC:.cpp=.o}

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = span
RM = rm -f

all: ${NAME}

%.o: %.cpp Span.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CPP} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean