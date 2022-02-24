# ->-Variables-->
LIB_NAME 		= <name_of_the_library>

B_SRCS_FILES	=	exemple.c \

B_SRCS_FILES	= 	if_there_is_a_bonus.c \

### Name the objects files ###
OBJS 			= $(SRCS_FILES:.c=.o)
BONUS_OBJS 		= $(B_SRCS_FILES:.c=.o)

### Compile and archive ###
CC 				= gcc
FLAGS 			= -Wall -Werror -Wextra
ARCHIVE 		= ar -crs

### Others functions ###
REMOVE 			= rm -rf

### Colour variables ###
END				= \033[0m
BOLD			= \033[1m
ITALIC			= \033[3m
URL				= \033[4m
BLINK			= \033[5m
BLINK2			= \033[6m
SELECTED		= \033[7m

BLACK			= \033[30m
RED				= \033[31m
GREEN			= \033[32m
YELLOW			= \033[33m
BLUE			= \033[34m
VIOLET			= \033[35m
BEIGE			= \033[36m
WHITE			= \033[37m

# ->-Rules-->
all: ${NAME}

${NAME}: ${OBJS}
	@${ARCHIVE} ${NAME} ${OBJS}
	@echo "${OBJS} ${GREEN}${BOLD}\n\nObjects files are added to the archive libft.a correctly\n${END}"

bonus: ${NAME} ${BONUS_OBJS}
	@${ARCHIVE} ${NAME} ${BONUS_OBJS}
	@echo "${BONUS_OBJS} ${GREEN} ${BOLD}\n\nObjects files and bonus objects files are added to the archive libft.a correctly\n${END}"

.c.o:
	$(CC) ${FLAGS} -o $@ -c $<
	@echo "${GREEN}Compilation OK!${END}"

clean:
	$(REMOVE) ${OBJS} ${BONUS_OBJS}
	@echo "\n${GREEN}${BOLD}Objects files are ${RED}deleted${GREEN} correcly\n${END}"

fclean: clean
	@${REMOVE} ${NAME}
	@echo "\n${GREEN}${BOLD}Library are ${RED}deleted${GREEN} too\n${END}"

re: fclean all
	@echo "${GREEN}${BOLD}Library are remaked correcly${END}"

.PHONY: clean fclean all re bonus