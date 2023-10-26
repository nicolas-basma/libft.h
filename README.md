# LIBFT
**Primer proyecto como alumno de la escuela 42!**

## FUNCIONES DE LA LIBRERIA LIBFT

### ft_atoi(const char *str)
*-Convierte una cadena de caracteres a un entero.*
### ft_bzero(void *s, size_t n)
*-Rellena una cadena de caracteres con nulos.*
### ft_calloc(size_t count, size_t size)
*-Reserva memoria y la rellena con nulos.*
### ft_isalnum(int c)
*-Comprueba si el caracter es alfanumerico.*
### ft_isalpha(int c)
*-Comprueba si el caracter es alfabetico.*
### ft_isascii(int c)
*-Comprueba si el caracter es ascii.*
### ft_isdigit(int c)
*-Comprueba si el caracter es un digito.*
### ft_isprint(int c)
*-Comprueba si el caracter es imprimible.*
### ft_itoa(int n)
*-Convierte un entero a una cadena de caracteres.*
### ft_memcpy(void *dest, const void *src, size_t n)
*-Copia una cadena de caracteres hasta que se encuentra un caracter especifico.*
### ft_memchr(const void *s, int c, size_t n)
*-Localiza la primera aparición del carácter c en los primeros n caracteres del objeto apuntado por s.*
### ft_memcmp(const void *s1, const void *s2, size_t n)
*-Compara los primeros n caracteres del objeto apuntado por s1 con los primeros n caracteres del objeto apuntado por s2.*
### ft_memcpy(void *dest, const void *src, size_t n)
*-Copia n caracteres del objeto apuntado por src al objeto apuntado por dest.*  
### ft_memmove(void *dest, const void *src, size_t n)
*-Copia n caracteres del objeto apuntado por src al objeto apuntado por dest.*
### ft_memset(void *s, int c, size_t n)
*-Rellena los primeros n bytes del área de memoria apuntada por s con el byte constante c.*
### ft_putchar_fd(char c, int fd)
*-Escribe el carácter c en el descriptor de archivo proporcionado.*
### ft_strchr(const char *s, int c)
*-Busca la primera aparición del carácter c (un carácter sin signo) en la cadena apuntada por s.*
### ft_strdup(const char *s1)
*-Duplica una cadena de caracteres en un nuevo espacio de memoria con malloc.*
### ft_strjoin(char const *s1, char const *s2)
*-Combina dos cadenas de caracteres en una nueva cadena de caracteres con malloc.*
### ft_strlcat(char *dst, const char *src, unsigned int n)
*-Concatena n caracteres de la cadena src a la cadena de caracteres dst, sobrescribiendo el terminador nulo al final de dst, y luego añade un terminador nulo*
### ft_strlcpy(char *dst, const char *src, unsigned int n)
*-Copia hasta n caracteres de la cadena src en la cadena dst, terminando siempre con un terminador nulo.*
### ft_strlen(const char *s)
*-Calcula la longitud de la cadena de caracteres s, excluyendo el terminador nulo.*
### ft_strncmp(const char *s1, const char *s2, size_t n)
*-Compara los primeros n caracteres de las cadenas s1 y s2.*
### ft_strnstr(const char *str, const char *to_find, unsigned int n)
*-Busca la primera aparición de la subcadena to_find en la cadena str, donde no más de n caracteres son buscados.*
### ft_strrchr(const char *s, int c)
*-Busca la última aparición del carácter c (un carácter sin signo) en la cadena apuntada por s.*
### ft_strtrim(char const *s1, char const *set)
*-Reserva memoria y devuelve una copia de la cadena de caracteres s1 sin los caracteres especificados en el set al principio y al final de la cadena.*
### ft_substr(char const *s, unsigned int start, size_t len)
*-Reserva len caracteres de memoria y devuelve una copia de la cadena de caracteres s, comenzando en el índice start.*
### ft_tolower(int c)
*-Convierte el carácter c a minúsculas.*
### ft_toupper(int c)
*-Convierte el carácter c a mayúsculas.*
### ft_split(char const *s, char c)
*-Reserva memoria y devuelve una matriz de cadenas de caracteres obtenidas separando la cadena s con el carácter c, que se utiliza como delimitador.*




### libft.h
*-Contiene los prototipos de las funciones y las librerias necesarias para su funcionamiento.*
### Makefile
*-Compila los archivos .c y crea la libreria libft.a*

