# Colors

C_GREY		=	\033[1;30m
C_RED		=	\033[1;31m
C_GREEN		=	\033[1;32m
C_YELLOW	=	\033[1;33m
C_BLUE		=	\033[1;34m
C_PURPLE	=	\033[1;35m
C_CYAN		=	\033[1;36m
C_WHITE		=	\033[1;37m
C_END		=	\033[0m


NAME	=	megaphone

CC	=	clang++

RM	=	rm -rf

CP	=	cp -r

CFLAGS	=	-Wall -Wextra -Werror

TFLAGS	=	-Wall -Wextra -Werror

SRC		+=	megaphone.cpp


OBJ_PATH	=	./.obj/

vpath %.cpp .

OBJ		=	$(patsubst %.cpp, $(OBJ_PATH)%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(TFLAGS)
	@echo "$<		[$(C_GREEN)OK$(C_END)]"

$(OBJ): $(OBJ_PATH)%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

clean:
	@$(RM) $(OBJ_PATH)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

debug:
	@echo $(OBJ)
	@echo $(SRC)