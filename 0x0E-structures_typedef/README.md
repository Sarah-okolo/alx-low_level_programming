  C - STRUCTURES, TYPEDEF

dog.h
    - Defines a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *
Define a new type dog_t as a new name for the type struct dog

1-init_dog.c
    - Writes a function that initializes a variable of type struct dog.

2-print_dog.c
    - Writes a function that prints a struct dog, if an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL prints nothing.

4-new_dog.c
    - Write a function that creates a new dog, stores a copy of name and owner
Returns NULL if the function fails.

5-free_dog.c
    - A function that frees dogs.
