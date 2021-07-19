#ifndef FILE_DOG_H
#define FILE_DOG_H

/**
 * struct dog - new type struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: new type struct dog with the above elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
