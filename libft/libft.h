#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    void    *content;
    struct s_list *next;
}   t_list;

//is
int     ft_isalnum(int c); // ok
int     ft_isalpha(int c); // ok
int     ft_isascii(int c); // ok
int     ft_isdigit(int c); // ok
int     ft_isprint(int c); // ok

//to
char    *ft_itoa(int n); // ok
int     ft_atoi(const char *str); // ok
int     ft_tolower(int c); // ok
int     ft_toupper(int c); // ok

//put
void    ft_putstr_fd(char *s, int fd); // ok
void    ft_putchar_fd(char c, int fd); // ok
void    ft_putendl_fd(char *s, int fd); // ok
void    ft_putnbr_fd(int n, int fd); // ok

//str
char    *ft_strdup(const char *str); // ok
char    *ft_strjoin(char const *s1, char const *s2); // ok
size_t  ft_strlcat(char *dest, const char *src, size_t destsize); // ok
size_t  ft_strlcpy(char *dest, const char *src, size_t destsize); // ok
size_t  ft_strlen(const char *str); // ok
int     ft_strncmp(const char *str1, const char *str2, size_t n); // ok
char    *ft_strnstr(const char *haystack, const char *needle, size_t len); // ok
char    *ft_strtrim(char const *s1, char const *set); // ok
char    *ft_strchr(const char *str, int ch);
char    *ft_strrchr(const char *str, int ch);
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    **ft_split(char const *s, char c);

//mem
void    ft_bzero(void *ch, size_t n);
void    *ft_calloc(size_t nitems, size_t size);
void    *ft_memchr(const void *str, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *dest, int ch, size_t count);
int     ft_memcmp(const void *str1, const void *str2, size_t n);

//bonus
t_list  *ft_lstnew(void *content);
t_list  *ft_lstlast(t_list *lst);
int     ft_lstsize(t_list *lst);
void    ft_lstadd_front(t_list **lst, t_list *n_data);
void    ft_lstadd_back(t_list **lst, t_list *n_data);
void    ft_lstdelone(t_list *lst, void  (*del)(void *));
void    ft_lstclear(t_list **lst, void  (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
