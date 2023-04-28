# Directory Name

0x0F-function_pointers

# Directory Description

* This directory contains files that depict different functions that relate to the concept of **Function Pointers**.

* ***what is a function pointer? - This is a variable in C programming that holds the address of a function in memory, in simple terms: it is a pointer that points to a function instead of a variable.***

* Each task shows different uses of Function pointers.

# Directory Content

* **Task 0 - what's my name** 

	* This task requires us to write a function that prints a name.
	* Prototype: void print_name(char *name, void (*f)(char *));



* ***Task 1 -  If you spend too much time thinking about a thing, you'll never get it done***

	* This task needs us to write a function given as a parameter on each element of an array.
	* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

* ***Task 2 - To hell with circumstances; I create opportunities***

	* The task requires us to write a function that searches for an integer.
	* Prototype: int int_index(int *array, int size, int (*cmp)(int));

* ***Task 3 - A goal is not always meant to be reached, it often serves simply as something to aim at***

	* The task requires us to  write a program that performs simple operations
	* The operations include:
		*Addition*
		*Subtraction*
		*multiplication*
		*division*
		*modulo*
	* In this task we are to create three files ***3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h***

	* Prototype: int (*get_op_func(char *s))(int, int);

* ***Task 4 - Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker***

	* The task requires us to write a program that prints *opcodes* of its own main function.
