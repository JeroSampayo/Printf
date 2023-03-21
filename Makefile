# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 11:07:07 by jmiras-s          #+#    #+#              #
#    Updated: 2023/03/15 12:25:26 by jmiras-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----- NAME -

# Comentario
NAME = printf.a

MKFL	= Makefile

# ----- PATH -
# Directorios donde se encuentran los archivos de origen, utilidad y objeto
SRC_DIR	= src/
UTL_DIR	= util/
OBJ_DIR = obj/

# ----- CMDS -
# Comandos que se usarán en las reglas de construcción y compilación.
# AR:Crear la biblioteca estática RM:-f Eliminar archivos-f borra direcamente MK:Crear directorios.-p si no existe crealo si ignora 
CFLAGS	= -Wall -Werror -Wextra
AR		= ar -rcs
RM		= rm -f
MK		= mkdir -p

# ----- SRCS -

#-i texto -I carpeta
INCLUDE = -I./

SRC = ft_printf.c ft_flag.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c \

# Ficheros objeto resultantes de compilar los archivos fuente
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
DEP = $(addsuffix .d, $(basename $(OBJ)))

# ----- RULE -
# Regla para crear los archivos objeto a partir de los archivos fuente
$(OBJ_DIR)%.o: %.c $(MKFL)
	$(MK) $(dir $@)
	$(CC) $(CFLAGS) -MT $@ -MMD -MP $(INCLUDE) -c $< -o $@


# ----- Regla para construir el archivo final (biblioteca estática)
all:
	$(MAKE) $(NAME)

# ar (CREACION Y COMPILACION LIBRERIA)

$(NAME):: $(OBJ)
	$(AR) $(NAME) $(OBJ)

-include $(DEP)

# Regla para limpiar los archivos objeto
clean:
	$(RM) -r $(OBJ_DIR)

# Regla para eliminar los archivos objeto y la biblioteca estática
fclean:
	$(MAKE) clean
	$(RM) $(NAME)

# Regla para reconstruir el proyecto completo
re:
	$(MAKE) fclean
	$(MAKE)

# PHONY indica que estas reglas no generan archivos con el mismo nombre y se deben ejecutar siempre
.PHONY: all fclean clean re
