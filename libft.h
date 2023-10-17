/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:41:21 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/17 12:02:12 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief turn a string in to a int
 * 
 * @param str string to be convert
 * @return int integer result of conversion
 */
int		ft_atoi(const char *str);
/**
 * @brief writes n zero bytes to de string s. if n = 0 does nothing.
 * included <string.h>
 * @param s the string
 * @param n n bytes of zeros
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief Allocates memory for a given size and sets it to a zero.
 * 
 * @param count The number of elements to be allocated.
 * @param size  The size of memory block in bytes.
 * @return void* 
 */
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
/**
 * @brief convert integer to ASCII string. Usando malloc genera una string que 
 * represente el valor entero recibido como argumento. los numeros negativos 
 * deben gestionarse. 
 * @param n El entero a convertir
 * @return char* la string que represente el número. NULL si falla memoria.
 */
char	*ft_itoa(int n);
/**
 * @brief Fill a byte sting with a byte value.
 * writes len bytes of value c (converted to an unsigned char) to the sting b.
 * 
 * @param b 
 * @param c 
 * @param len 
 * @return void* 
 */
void	*ft_memset(void *b, int c, size_t len);
/**
 * @brief locates the first occurrence of c (converted to unsigned char) 
 * in string s.
 * @param s string 
 * @param c int to look for
 * @param n n bytes to look for
 * @return void* returns a pointer to de byte located or NULL if doesn't exist
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief  Compares the first n bytes of memory area s1 to the n bytes of s2
 * @param s1 First string to be compared
 * @param s2 Second string to be compared
 * @param n Number of bytes to de compared
 * @return int Zero if s1=s2, else s1 - s2. Treated as unsigned char values. 
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief copies n bytes from memory area src to dst. If dst and src overlap,
 * behavior is undefined. 
 * @param dst memory area where it be copied
 * @param src memory area of source
 * @param n n bytes to be copied
 * @return void* 
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * @brief copies len bytes from string src to string dst.
 * the two strings may overlap, the copy is done a non destrucive manner
 * If the destination pointer is greater than the source pointer, then copy  
 * the source pointer to the destination pointer in reverse order. Otherwise, 
 * copy the source pointer  to the destination pointer in the normal order
 * @param dst This is the destination array where the content is to be copied, 
 * type-casted to a pointer
 * @param src source string to be copied
 * @param len  number of bytes to be moved
 * @return a pointer to the dst string 
 */
void	*ft_memmove(void *dst, const void *src, size_t len);
/**
 * @brief Sends the char 'c' to the specified file descriptor 
 * 
 * @param c Char to send
 * @param fd File descriptor to write in
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief Sends a string to the specified file descriptor
 * follow by a /n
 * @param s String to send
 * @param fd File descriptor to write in
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief Sends the number n to the specified file descriptor
 * 
 * @param n the number
 * @param fd file descriptor to write in
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * @brief Sends a string to the specified file descriptor
 * 
 * @param s String to send
 * @param fd file descriptor to write in
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief Reserva con malloc un array de strings resultante de separar la 
 * string s en substrings usando el char c como delimitador. el array debe 
 * terminar en null.
 * @param s la string a separar
 * @param c el caracter delimitador
 * @return char** el array de nuevas strings resultante de la separación.
 * null si falla la reserva de memoria.
 */
char	**ft_split(char const *s, char c);
/**
 * @brief locates de first occurrence of c in the string s. 
 * 
 * @param s string 
 * @param c char to look for
 * @return char* pointer to the char or null if it doesnt appear in string.
 */
char	*ft_strchr(const char *s, int c);
/**
 * 
 @brief Allocates sufficient memory for a copy of the string s1, does the copy,
 * and returns a pointer to it.
 * @param s1 The string to be copied
 * @return char* a pointer to a new string that is duplicate of s1
 */
char	*ft_strdup(const char *s1);
/**
 * @brief Applies Function to every char of s.
 * 
 * @param s string to do iteration
 * @param f function to apply
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/**
 * @brief Allocates memory and return a new string, s1 concatenada con s2
 * 
 * @param s1 String 1
 * @param s2 String 2
 * @return char* Pointer to new string
 */
char	*ft_strjoin(const char *s1, const char *s2);
/**
 * @brief Copy and concatenate strings. Appends de string src to the end of
 * dst. It will append at most dstsize - strlen (dst) -1 char. It will NULL
 * terminates unless dstsize is 0 or the original dst string was longer than 
 * dstsize. 
 * @param dst String destination 
 * @param src String source
 * @param dstsize Max size of dst
 * @return size_t The size that could have the string if there werent a limit
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
/**
 * @brief Apply a Function (*f) to every single char of s.
 * Allocates memory to the new string.
 * @param s String to apply the function
 * @param f Function to be applied
 * @return char* A pointer to the new string. Null if malloc fail
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief compares the first n characters of the strings s1 & s2
 * 
 * @param s1 the first string to be compared
 * @param s2 the string to compare to
 * @param n the max number of char to compare
 * @return int 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief locates the first occurrence of the null terminated string needle
 * in the string hastack, where not more than len chars are searched. 
 * @param haystack String to search in
 * @param needle String to be search
 * @param len max characters to search
 * @return char* if needle is empty haystack is returned, if needle occurs
 * nowhere in haystack, null is returned. Otherwise, a pointer to the first 
 * occurrence of needle
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/**
 * @brief Locetes de last occurrence of c in the string s
 * 
 * @param s string to search
 * @param c character to search for
 * @return char* a pointer to the las coccurrence of the character c in
 * the string s.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Deletes all char of a string from the beggining and the back of s1 
 * until find a char that doesn't belong to set. 
 * The string is returned and allocated using malloc
 * @param s1 String to be trim
 * @param set Char to delete 
 * @return char* la string recortada. null si falla la reserva de memoria.
 */
char	*ft_strtrim(char const *s1, char const *set);
/**
 * @brief allocates memory and returns a substring de s
 * the substring start from 'start' and has a len lenght.
 * @param s String source to create the substring
 * @param start Indice del caractern en s desde donde empezar la substring.
 * @param len Max lenght of the substring
 * @return char* A pointer to the substring. Null if memory fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief Converts an uppercase letter to a lower case
 * 
 * @param c int to converts
 * @return int converted. if isn't a lower case returns the int unchanged.
 */
int		ft_tolower(int c);
/**
 * @brief Converts a lowercase letter to an uppercase
 * 
 * @param c int to converts
 * @return int nt converted. if isn't a lower case returns the int unchanged
 */
int		ft_toupper(int c);
/**
 * @brief Creates a node new in a list.
 * An allocates it using Malloc
 * @param content 
 * @return t_list* 
 */
t_list	*ft_lstnew(void *content);
/**
 * @brief Adds a new Node to the beggining of de list "list"
 * Doesn't use malloc
 * @param lst pointer to the first node of a list
 * @param new pointer to de new first node added to the list
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief Counts de numbers of nodes of a list
 * 
 * @param lst Pointer to the first node
 * @return int Number of nodes in list
 */
int		ft_lstsize(t_list *lst);
/**
 * @brief Return the last node of a list.
 * 
 * @param lst A pointer to the first node of list
 * @return t_list* A pointer to the last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);
/**
 * @brief Adds a new node at the end of lst
 * Doesn't use malloc
 * @param lst Pointer to the first node
 * @param new Pointer to the last new node
 */
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief Takes as parameter a node 'lst' and free the memory of the content
 * using a function 'del' given as parameter. Memory of next musn't be free.
 * @param lst Node to free
 * @param del a pointer to a functions used to free the node
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * @brief Delet and free the node lst and all next nodes.
 * Uses del and free. The last pointer must be NULL.
 * @param lst Pointer to a node
 * @param del Pointer to a funcion used to free de node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/**
 * @brief Iters a list lst and applies the function F on each node.
 * 
 * @param lst Pointer to the first node.
 * @param f Pointer to the function to apply.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * @brief Iters a list lst an applies the function f to the content of each node.
 * Uses malloc and free.
 * @param lst pointer to a node
 * @param f pointer to the function to apply
 * @param del pointer to a function to del the content if necessary
 * @return t_list* 
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
