#define the name of the library to create/executable
NAME = libft.a
#list of sources/files to compile
FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
#OBJ have the name of the object files after the compilation with the .c files now they are .o files
OBJ = $(FILES:.c=.o)
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)
#define the compiler to use
COMPILADOR = gcc
#flags to detect errors
FLAGS = -Wall -Wextra -Werror
##OBJ = ft_*.o
#Defines the command to create the static library. Use the **ar** command to package the object files into the library.
CREATE = ar rcs
#Command to remove files. Use the **-f** flag to force the removal of the files.
RM = rm -f

#This is the rule that will be executed when you run **make** or **make all**. It will compile the object files and then create the library.
$(NAME): $(OBJ)
	$(COMPILADOR) $(FLAGS) -c $(FILES)
	$(CREATE) $(NAME) $(OBJ)
	ranlib $(NAME)
	
bonus: $(OBJ_BONUS)
	$(COMPILADOR) $(FLAGS) -c $(SRC_BONUS)
	$(CREATE) $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)
all: $(NAME)
clean:
	$(RM) $(OBJ) $(NAME) $(OBJ_BONUS)
fclean: clean

re: fclean all

.PHONY: all clean fclean re
