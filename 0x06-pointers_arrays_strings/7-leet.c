#include "main.h"
/**
 * leet - Takes the string that is going to be modified and changed from vowels to nums 
 * @str: The operation string 
 *
 * Return: The final string
 */
char *leet(char *str)
{
  int i, j;
  char c[] = "aAeEoOtTlL";
  char n[] = "4433007711";

  i = 0;
  while (str[i] != '\0')
    {
      j = 0;
      while (c[j] != '\0')
	{
	  if (str[i] == c[j])
	    {
	      str[i] = n[j];
	    }
	  j++;
	}
      i++;
    }
  return (str);
}
