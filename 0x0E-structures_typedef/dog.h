#ifndef DOG_H
#define DOG_H

/**
 * dog_t - type def for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - Struct to store information of a dog.
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.<F11>
 */
struct dog
{
char *name;
float age;
char *owner;
};
#endif /*dog.h*/
