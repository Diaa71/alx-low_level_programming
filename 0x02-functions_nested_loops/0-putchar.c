#include "main.h"
	#include <unistd.h>
	/**
	 * _putchar - write char c 
	 * @c: pring the char 
	 * Return: On success 1
	 * error, -1
	 */
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
