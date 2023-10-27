# LIBFT
*Esta libreria contiene funciones de la libreria estandar de C, funciones de manejo de cadenas de caracteres y funciones de manejo de memoria.*

## FUNCIONES :
```c
* int  ft_atoi(const char *str)
```
```c
    * Parametros:
        * const char *str ( Cadena de caracteres a convertir en entero ).
    * Return:
        * int: Entero convertido.
```

>*Convierte una cadena de caracteres **(string)** a un entero **( int )**.*

---------------------------------------
```c
* int ft_isalnum(int c)
```
```c
    * Parametros:
        * int c ( Caracter a comprobar ).
    * Return:
        * int: 1 si es alfanumerico, 0 si no lo es.
```
>*Comprueba si el caracter **c** es alfanumerico.*

---------------------------------------
```c
* int ft_isalpha(int c)
```
```c
    * Parametros:
        * int c ( Caracter a comprobar ).
    * Return:
        * int: 1 si es alfabetico, 0 si no lo es.
```
>*Comprueba si el caracter **c** es alfabetico.*

---------------------------------------
```c
* int ft_isascii(int c)
```
```c
    * Parametros:
        * int c ( Caracter a comprobar ).
    * Return:
        * int: 1 si es un caracter ASCII, 0 si no lo es.
```
>*Comprueba si el caracter **c** es un caracter ASCII.*

---------------------------------------
```c
* int ft_isdigit(int c)
```
```c
    * Parametros:
        * int c ( Caracter a comprobar ).
    * Return:
        * int: 1 si es un digito, 0 si no lo es.
```
>*Comprueba si el caracter **c** es un digito.*

---------------------------------------
```c
* int ft_isprint(int c)
```
```c
    * Parametros:
        * int c ( Caracter a comprobar ).
    * Return:
        * int: 1 si es un caracter imprimible, 0 si no lo es.
```
>*Comprueba si el caracter **c** es un caracter imprimible.*

---------------------------------------
```c
* void ft_memchr(const void *s, int c, size_t n)
```
```c
    * Parametros:
        * const void *s ( Cadena de caracteres a comprobar ).
        * int c ( Caracter a buscar ).
        * size_t n ( Numero de bytes a comprobar ).
    * Return:
        * ptr: Puntero a la primera ocurrencia del caracter c en la cadena de caracteres s.
        * NULL: Si no se encuentra el caracter c en la cadena de caracteres s.
```
>*Busca el caracter **c** en los primeros **n** bytes de la cadena de caracteres **s**.*

---------------------------------------
```c
* void  ft_bzero(void *str, size_t n)
```
```c
    * Parametros:
        * void *s ( Puntero a la cadena de caracteres ).
        * size_t n ( Numero de bytes a rellenar con ceros ('\0') ).
    * Return:
        * void: Función void no retorna nada.
```

>*Rellena con ceros **( '\0' )** los primeros **n** bytes de la cadena de caracteres **s**.*

---------------------------------------
```c
* void *ft_memcpy(void *dest, const void *src, size_t n)
```
```c
    * Parametros:
        * void *dest ( Cadena de caracteres destino ).
        * const void *src ( Cadena de caracteres origen ).
        * size_t n ( Numero de bytes a copiar ).
    * Return:
        * dest : Puntero a la cadena de caracteres destino.
```
>*Copia los primeros **n** bytes de la cadena de caracteres **src** en la cadena de caracteres **dest**.*

---------------------------------------
```c
* void *ft_memmove(void *dest, const void *src, size_t n)
```
```c
    * Parametros:
        * void *dest ( Cadena de caracteres destino ).
        * const void *src ( Cadena de caracteres origen ).
        * size_t n ( Numero de bytes a copiar ).
    * Return:
        * dest : Puntero a la cadena de caracteres destino.
```
>*Copia los primeros **n** bytes de la cadena de caracteres **src** en la cadena de caracteres **dest**.
Esta función es mas segura que **ft_memcpy** ya que no se solapan las cadenas de caracteres.*

---------------------------------------
```c
* void *ft_memset(void *str, int c, size_t n)
```
```c
    * Parametros:
        * void *str ( Cadena de caracteres a rellenar ).
        * int c ( Caracter a rellenar ).
        * size_t n ( Numero de bytes a rellenar ).
    * Return:
        * str : Puntero a la cadena de caracteres rellenada.
```
>*Rellena los primeros **n** bytes de la cadena de caracteres **str** con el caracter **c**.*

---------------------------------------
```c
* char *ft_strchr(const char *s, int c)
```
```c
    * Parametros:
        * const char *s ( Cadena de caracteres a comprobar ).
        * int c ( Caracter a buscar ).
    * Return:
        * ptr: Puntero a la primera ocurrencia del caracter c en la cadena de caracteres s.
        * NULL: Si no se encuentra el caracter c en la cadena de caracteres s.
```
>*Busca el caracter **c** en la cadena de caracteres **s**.*

---------------------------------------
```c
* char *ft_strdup(const char *s)
```
```c
    * Parametros:
        * const char *s ( Cadena de caracteres a duplicar ).
    * Return:
        * ptr: Puntero a la cadena de caracteres duplicada.
        * NULL: Si no se pudo duplicar la cadena de caracteres s.
```
>*Reserva memoria con malloc y duplica la cadena de caracteres **s**.*

---------------------------------------
```c
* size_t ft_strlcat(char *dest, const char *src, size_t size)
```
```c
    * Parametros:
        * char *dest ( Cadena de caracteres destino ).
        * const char *src ( Cadena de caracteres origen ).
        * size_t size ( Tamaño de la cadena de caracteres destino ).
    * Return:
        * size_t: Tamaño de la cadena de caracteres destino.
```
>*Concatena la cadena de caracteres **src** a la cadena de caracteres **dest**.*

---------------------------------------
```c
* size_t ft_strlcpy(char *dest, const char *src, size_t size)
```
```c
    * Parametros:
        * char *dest ( Cadena de caracteres destino ).
        * const char *src ( Cadena de caracteres origen ).
        * size_t size ( Tamaño de la cadena de caracteres destino ).
    * Return:
        * size_t: Tamaño de la cadena de caracteres origen.
```
>*Copia la cadena de caracteres **src** a la cadena de caracteres **dest**.*

---------------------------------------
```c
* size_t ft_strlen(const char *s)
```
```c
    * Parametros:
        * const char *s ( Cadena de caracteres a medir ).
    * Return:
        * size_t: Tamaño de la cadena de caracteres s.
```
>*Mide el tamaño de la cadena de caracteres **s**.*

---------------------------------------
```c
* int ft_strncmp(const char *s1, const char *s2, size_t n)
```
```c
    * Parametros:
        * const char *s1 ( Cadena de caracteres 1 ).
        * const char *s2 ( Cadena de caracteres 2 ).
        * size_t n ( Numero de bytes a comparar ).
    * Return:
        * int: 0 si las cadenas de caracteres son iguales, 1 si no lo son.
```
>*Compara las cadenas de caracteres **s1** y **s2**.*

---------------------------------------
```c
* char *ft_strnstr(const char *str, const char *to_find, size_t len)
```
```c
    * Parametros:
        * const char *str ( Cadena de caracteres a comprobar ).
        * const char *to_find ( Cadena de caracteres a buscar ).
        * size_t len ( Numero de bytes a comprobar ).
    * Return:
        * ptr: Puntero a la primera ocurrencia de la cadena de caracteres to_find en la cadena de caracteres str.
        * NULL: Si no se encuentra la cadena de caracteres to_find en la cadena de caracteres str.
```
>*Busca la cadena de caracteres **to_find** en la cadena de caracteres **str** en los primeros **len** bytes.*

---------------------------------------
```c
* char *ft_strrchr(const char *s, int c)
```
```c
    * Parametros:
        * const char *s ( Cadena de caracteres a comprobar ).
        * int c ( Caracter a buscar ).
    * Return:
        * ptr: Puntero a la ultima ocurrencia del caracter c en la cadena de caracteres s.
        * NULL: Si no se encuentra el caracter c en la cadena de caracteres s.
```
>*Busca el caracter **c** en la cadena de caracteres **s** desde el final de la cadena de caracteres.*

---------------------------------------
```c
* int ft_tolower(int c)
```
```c
    * Parametros:
        * int c ( Caracter a convertir ).
    * Return:
        * int: Caracter convertido a minuscula.
```
>*Convierte el caracter **c** a minuscula.*

---------------------------------------
```c
* int ft_toupper(int c)
```
```c
    * Parametros:
        * int c ( Caracter a convertir ).
    * Return:
        * int: Caracter convertido a mayuscula.
```
>*Convierte el caracter **c** a mayuscula.*

---------------------------------------
```c
* void *ft_calloc(size_t nitems, size_t size)
```
```c
    * Parametros:
        * size_t nitems ( Numero de elementos a reservar ).
        * size_t size ( Tamaño de cada elemento ).
    * Return:
        * ptr: Puntero a la memoria reservada.
        * NULL: Si no se pudo reservar la memoria.
```
>*Reserva nitems de memoria con malloc y la inicializa a 0.*

---------------------------------------
```c
* char *ft_substr(char const *s, unsigned int start, size_t len)
```
```c
    * Parametros:
        * char const *s ( Cadena de caracteres a copiar ).
        * unsigned int start ( Posicion de inicio de la cadena de caracteres ).
        * size_t len ( Tamaño de la cadena de caracteres a copiar ).
    * Return:
        * ptr: Puntero a la cadena de caracteres copiada.
        * NULL: Si no se pudo copiar la cadena de caracteres.
```
>*Copia la cadena de caracteres **s** desde la posicion **start** hasta **len** bytes.*

---------------------------------------
```c
* char *ft_strjoin(char const *s1, char const *s2)
```
```c
    * Parametros:
        * char const *s1 ( Cadena de caracteres 1 ).
        * char const *s2 ( Cadena de caracteres 2 ).
    * Return:
        * ptr: Puntero a la cadena de caracteres concatenada.
        * NULL: Si no se pudo concatenar la cadena de caracteres.
```

>*Concatena la cadena de caracteres **s1** con la cadena de caracteres **s2**.*

---------------------------------------
```c
* char *ft_strtrim(char const *s1, char const *set)
```
```c
    * Parametros:
        * char const *s1 ( Cadena de caracteres a copiar ).
        * char const *set ( Caracteres a eliminar ).
    * Return:
        * ptr: Puntero a la cadena de caracteres copiada.
        * NULL: Si no se pudo copiar la cadena de caracteres.
```
>*Copia la cadena de caracteres **s1** eliminando los caracteres de la cadena de caracteres **set**.*

---------------------------------------
```c
* char **ft_split(char const *s, char c)
```
```c
    * Parametros:
        * char const *s ( Cadena de caracteres a dividir ).
        * char c ( Caracter delimitador ).
    * Return:
        * ptr: Puntero a la cadena de caracteres dividida.
        * NULL: Si no se pudo dividir la cadena de caracteres.
```
>*Divide la cadena de caracteres **s** en una matriz de cadenas de caracteres delimitadas por el caracter **c**.*

---------------------------------------
```c
* char *ft_itoa(int n)
```
```c
    * Parametros:
        * int n ( Entero a convertir ).
    * Return:
        * ptr: Puntero a la cadena de caracteres convertida.
        * NULL: Si no se pudo convertir el entero.
```
>*Convierte el entero **n** a una cadena de caracteres.*

---------------------------------------
```c
* char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
```
```c
    * Parametros:
        * char const *s ( Cadena de caracteres a convertir ).
        * char (*f)(unsigned int, char) ( Funcion a aplicar a cada caracter ).
    * Return:
        * ptr: Puntero a la cadena de caracteres convertida.
        * NULL: Si no se pudo convertir la cadena de caracteres.
```
>*Aplica la funcion **f** a cada caracter de la cadena de caracteres **s**.*

---------------------------------------
```c
* void ft_putchar_fd(char c, int fd)
```
```c
    * Parametros:
        * char c ( Caracter a escribir ).
        * int fd ( Descriptor de archivo ).
    * Return:
        * void: Función void no retorna nada.
```
>*Escribe el caracter **c** en el descriptor de archivo **fd**.*

---------------------------------------
```c
* void ft_putstr_fd(char *s, int fd)
```
```c
    * Parametros:
        * char *s ( Cadena de caracteres a escribir ).
        * int fd ( Descriptor de archivo ).
    * Return:
        * void: Función void no retorna nada.
```
>*Escribe la cadena de caracteres **s** en el descriptor de archivo **fd**.*

---------------------------------------
```c
* void ft_putendl_fd(char *s, int fd)
```
```c
    * Parametros:
        * char *s ( Cadena de caracteres a escribir ).
        * int fd ( Descriptor de archivo ).
    * Return:
        * void: Función void no retorna nada.
```
>*Escribe la cadena de caracteres **s** en el descriptor de archivo **fd** seguido de un salto de linea.*

---------------------------------------
```c
* void ft_putnbr_fd(int n, int fd)
```
```c
    * Parametros:
        * int n ( Entero a escribir ).
        * int fd ( Descriptor de archivo ).
    * Return:
        * void: Función void no retorna nada.
```
>*Escribe el entero **n** en el descriptor de archivo **fd**.*

---------------------------------------

