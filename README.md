
# Printf Project

This is a custom implementation of the `printf()` function in C. The implementation is located in the `printf.c` file.

## Group Members

- [Mahmoud Hamdy](https://github.com/TutTrue).
- [Mohamed Elshafaey](https://github.com/MohamedElshafae)

## Usage

To use the `_printf()` function, make a main.c file and include the `printf.h` header file in your C program and call the function with the desired format string and arguments. The format string should include conversion specifiers and optional flags and modifiers, similar to the `printf()` function in the standard C library.

## Supported Conversion Specifiers

The `_printf()` function supports the following conversion specifiers:

- `%c`: Character
- `%s`: String
- `%S`: Wide characters
- `%d`: Signed decimal integer
- `%i`: Signed decimal integer
- `%u`: Unsigned decimal integer
- `%o`: Octal integer
- `%x`: Hexadecimal integer (lowercase)
- `%X`: Hexadecimal integer (uppercase)
- `%%`: Modelas
- `%r`: Reversed string
- `%b`: Binary
- `%p`: Pointer

## Flags and Modifiers

The `_printf()` function supports the following flags and modifiers:

- `#`: causes the output to be prefixed with '0'
- `+`: causes the output to be signed and to include a plus sign ('+') for positive values and a minus sign ('-') for negative values.
- ` `: causes the output to include a space character before positive numbers, and a minus sign ('-') before negative numbers. 

## Examples

Here are some examples of how to use the `_printf()` function:

```c
#include "printf.h"

int main(void)
{
    char c = 'H';
    char *s = "Hello";
    int num = 123;
    unsigned int u_num = 456;
    
    _printf("Char: %c\nString: %s\nNumber: %d\n", c, s, num);
    _printf("Unsigned Number: %u\nOctal Number: %o\nHexadecimal Number: %x\n", u_num, num, num);
    
    return (0);
}
```

This would output:

```
Char: H
String: Hello
Number: 123
Unsigned Number: 456
Octal Number: 173
Hexadecimal Number: 7b
```

## Testing

To run the test cases in the `main.c` file, compile the code with the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

Then run the `printf` executable.

```
./printf
```
## Bugs and Issues

If you encounter any bugs or issues with the project, please feel free to [submit an issue](https://github.com/TutTrue/printf/issues) on the project's GitHub repository.
