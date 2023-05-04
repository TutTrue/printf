
# Printf Project

This is a custom implementation of the `printf()` function in C. The implementation is located in the `printf.c` file.

## Group Members

- [Mahmoud Hamdy](https://github.com/TutTrue).
- [Mohamed Elshafaey](https://github.com/MohamedElshafae)

## Usage

To use the `_printf()` function, make a main.c file and include the `printf.h` header file in your C program and call the function with the desired format string and arguments. The format string should include conversion specifiers and optional flags and modifiers, similar to the `printf()` function in the standard C library.

## How the `_printf` Function Works

The `_printf` function in the TutTrue/printf project works in the following way:

1. The `_printf` function takes in a format string and variable arguments.
2. The function iterates through each character in the format string.
3. If the current character is not a '%', it is simply printed to the output.
4. If the current character is a '%', the function reads the next character to determine the conversion specifier and any associated flags/modifiers.
5. Based on the conversion specifier, the function extracts the corresponding function from `fun` which is an array of structs.
6. The function then formats and prints the argument to the output stream based on the conversion specifier and any associated flags/modifiers.
7. The function repeats steps 3-6 until the entire format string has been processed.

Note that this is a simplified overview and the actual implementation in the project may have additional details or optimizations. The source code in the `printf.c` file contains more details on how the function works.
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
