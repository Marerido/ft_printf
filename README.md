+ %c Prints a single character.
+ %s Prints a string (as defined by the common C convention).
+ %p The void * pointer argument has to be printed in hexadecimal format.
+ %d Prints a decimal (base 10) number.
+ %i Prints an integer in base 10.
+ %u Prints an unsigned decimal (base 10) number.
+ %x Prints a number in hexadecimal (base 16) lowercase format.
+ %X Prints a number in hexadecimal (base 16) uppercase format.
+ %% Prints a percent sign.

# Used external functions
## va_start, va_arg, va_copy, va_end
Defined in ```#include <stdarg.h>``` .
These are macros which are used to simplify inputs. To initialize a function which uses these macros is described as followed:
```
void testfunction(int count,...)
```
where the dots ```...``` stands for a variadic funtion. A variadic function means, the amount of variables are not defined in the function decleration. 

### va_list
initialize a list with args as arguments. The syntax is as followed after the function declaration: ```va_list args;```. 

### va_start
Initialise a argument list. It takes two parameter. The arguments and the length of the list. The syntax is as followed:  ```va_start(args, length)``` 

### va_end
Is used after one is done with setting the list at the end of the code. It cleans the argument list which was initiliazed by va_start

### va_copy
copys the values of va_list without to influenc this list. 
## write 
## free
## malloc

# Instruction
1. write printf functions which is looking for ```%"format"``` where ```"format"``` stands for the format which one want to print
2. include Format function which are executed when the first point is true
3. if no ```%``` was found, print an error
