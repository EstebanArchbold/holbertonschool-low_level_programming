#ifndef HOLBERTON_C
#define HOLBERTON_C

void _puts_recursion(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
