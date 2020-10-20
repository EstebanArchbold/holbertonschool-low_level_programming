#ifndef FILE_DOG
#define FILE_DOG
/**
 * struct dog - dog information adquire
 * @name: name of the dog
 * @age: how old is the dog
 * @owner :who belong the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
