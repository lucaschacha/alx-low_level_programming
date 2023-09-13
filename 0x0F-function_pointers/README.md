##C - Function pointers
#TASKS
0. What's my name
Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));

1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array and action is a pointer to the function you need to use.

2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.
Prototype: int int_index(int *array, int size, int (*cmp)(int));

3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations.
You are allowed to use the standard library

3-calc.h
This file should contain all the function prototypes and data structures used by the program. You can use this structure:
3-op_functions.c
This file should contain the 5 following functions (not more):
3-get_op_func.c
This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

Prototype: int (*get_op_func(char *s))(int, int);
where s is the operator passed as argument to the program
This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add

3-main.c
This file should contain your main function only.

4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
Write a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes

Output format:

the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example
You are allowed to use printf and atoi
