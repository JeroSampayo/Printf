# Printf
![C](https://forthebadge.com/images/badges/made-with-c.svg)
![GIT](https://forthebadge.com/images/badges/uses-git.svg)

The printf() function is a very useful tool in the C programming language that is used to print messages to the screen or to a file. You provide it with a message and the function displays it on the screen, just as you typed it, or with some changes if you specify some special formatting.

# Printf 
![C](https://forthebadge.com/images/badges/made-with-c.svg)
![GIT](https://forthebadge.com/images/badges/uses-git.svg)

La función printf() es una herramienta muy útil en el lenguaje de programación C que se utiliza para imprimir mensajes en la pantalla o en un archivo. Se le proporciona un mensaje y la función lo muestra en la pantalla, tal como lo escribiste, o con algunos cambios si especificas algún formato especial.

# Table of contents

# Basic Functions
### •[ft_printf](ft_printf.c)•<br> 
#### Printf: Checks the incoming argument taking into account two counters, if it detects % it enters flags, otherwise it prints on the screen. <br>
#### Printf: Revisa el argumento entrante teniendo en cuenta dos contadores, si detecta % entra en flags, sino imprime por pantalla. <br>
##### [Description ft_printf]<br>
-The main function manages the input of arguments, first listing and starting the functions with va_list and va_start, it will verify that it exists and that the counter is not -1, later it will verify the position in which it is, if it is a % it will enter in flags with +1 to verify the following position and with ecounts to count the number of impressions that it makes, all this using two counters, One of them that will enter in flags and it will restart after adding to the other that will add an impression each time that it takes out by screen. 
In the case of my function to save lines I have used a structure to name the counters and to initiate va_list created in the ft_print.h.<br>

-La función principal gestiona la entrada de argumentos, primero listando e iniciando las funciones con va_list y va_start, verificará que exista y que el contador no sea -1, posteriormente comprobará la posicion en la que se encuentre, si es un % entrará en flags con +1 para verificar la siguiente posicion y con ecounts para contabilizar el numero de impresiones que realiza, todo esto usando dos contadores, Uno de ellos que entrara en flags y se ira reiniciando despues de sumarle al otro que añadira una impresion cada vez que saque por pantalla. 
En el caso de mi función para ahorrar lineas he utilizado una estructura para nombrar los contadores e iniciar va_list creada en el ft_print.h.<br>

### •[ft_flag](ft_flag.c)•<br>
#### ft_flag: Checks if the position is equal to one of the placeholders, otherwise prints on the screen and returns the printout.<br>
#### ft_flag: Revisa si la posicion es igual a uno de los placeholders, en caso contrario imprime por pantalla y retorna la impresión.<br>
##### [Description ft_flag]<br>
-Function it enters once it detects that you are in the position you are in to check the different placeholders.
In this case I have taken into account the following flags. %c %d %d %d %i %p %u %x %x %X %%
If none of the flags match, it prints on the screen and counts a printout.

-Función en la que entra una vez detecta que en la posicion en la que se encuentra para revisar los diferentes placeholders.
En este caso he tenido en cuenta las siguientes flags. %c %d  %d %i %p %u %x %X %%
Si no coinciden ninguna de las flags, imprime por pantalla y cuenta una impresion.

PD: I have implemented the Strchr function that I wanted to use to improve it with an additional flag but finally I have not used it, I will modify it soon.<br>

### •[ft_putchar](ft_putchar.c)•<br>
#### ft_putchar: Prints on the screen the character where it is found if it finds and prints count one, otherwise it returns -1.<br>
#### ft_putchar: Imprime por pantalla el caracter en el que se encuentra si encuentra e imprime cuenta uno, sino devuelve -1.<br>


### •[ft_puthex](ft_puthex.c)•<br>
#### ft_puthex: Checks <br>
##### [Description ft_puthex]<br>


### •[ft_putnbr](ft_putnbr.c)•<br>
#### ft_putnbr: Sends the integer 'n' to the standard output.<br>
#### ft_putnbr: Envía el número entero 'n' a la salida estándar.<br>
##### [Description ft_putnbr]<br>
-Protecting all cases of putchar or putnbr recursive so that in case of error it concatenates a -1 for all previous functions.
We create the function ft_stou that converts an int to an unsigned when it is not negative so that it has more numerical capacity.<br>

-Protegiendo en todos los casos de putchar o putnbr recursivo  para que en el caso de dar error concatene un -1 por todas las funciones anteriores
Creamos la funcion ft_stou que convierta un int en un unsigned cuando no sea negativo para que tenga mas capacidad numerica.<br>
   
### •[ft_putptr](ft_putptr.c)•<br>
#### ft_putptr:<br>
##### [Description ft_putptr]<br>


### •[ft_putstr](ft_putstr.c)•<br>
#### ft_putstr: Checks <br>
##### [Description ft_putstr]<br>
<br>
   
# Makefile & *.h
### •[ft_printf](ft_printf.h)•<br>
#### ft_printf.h: <br>
##### [Description ft_printf.h]<br>

### •[Makefile](Makefile.c)•<br>
#### Makefile.c: <br>
##### [Description Makefile.c]<br>
A makefile contains the commands to be executed by the make utility, as well as the dependencies between the different modules of the project. This description file is a text file.<br>

El fichero makefile contiene las órdenes que debe ejecutar la utilidad make , así como las dependencias entre los distintos módulos del proyecto. Este archivo de descripción es un fichero de texto.<br>
