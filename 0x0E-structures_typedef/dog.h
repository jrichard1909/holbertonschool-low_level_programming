#ifndef DOG_H
#define DOG_H

/**
 * struct my_struct - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strncpy(char *dest, char *src);
int _strlen_recursion(char *s);
void free_dog(dog_t *d);

#endif
