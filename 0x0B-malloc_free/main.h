#ifndef HEADER_FILE
#define HEADER_FILE
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);

#endif
